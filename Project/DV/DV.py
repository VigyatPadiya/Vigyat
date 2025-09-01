import os
import matplotlib.pyplot as plt
from datetime import datetime

# ======== CSV Reading ========
csv_file = "workout_log.csv"

def read_csv(file_path):
    with open(file_path, "r") as f:
        lines = f.read().strip().split("\n")
    headers = lines[0].split(",")
    data = [line.split(",") for line in lines[1:]]
    return headers, data

def parse_date(date_str):
    return datetime.strptime(date_str, "%d-%m-%y %H:%M")

headers, rows = read_csv(csv_file)

# Extract column indexes
idx_username = headers.index("Username")
idx_date = headers.index("Date")
idx_category = headers.index("Category")
idx_workout = headers.index("Workout")
idx_calories = headers.index("Calories")
idx_duration = headers.index("Duration(mins)")
idx_heart_rate = headers.index("Heart_Rate(bpm)")
idx_difficulty = headers.index("Difficulty(1-5)")

# ======== Chart Functions ========

# 1. Scatter plot: Calories vs Duration
def chart_calories_vs_duration():
    durations = [int(row[idx_duration]) for row in rows]
    calories = [int(row[idx_calories]) for row in rows]
    plt.scatter(durations, calories, c='blue', alpha=0.6, edgecolors='black')
    plt.title("Calories vs Duration")
    plt.xlabel("Duration (mins)")
    plt.ylabel("Calories Burned")
    plt.grid(True, linestyle='--', alpha=0.5)
    plt.show()

# 2. Box plot: Heart rate distribution per category
def chart_heart_rate_boxplot():
    categories = list(set(row[idx_category] for row in rows))
    data = []
    for cat in categories:
        cat_hr = [int(row[idx_heart_rate]) for row in rows if row[idx_category] == cat]
        data.append(cat_hr)
    plt.boxplot(data, labels=categories)
    plt.title("Heart Rate Distribution by Category")
    plt.ylabel("BPM")
    plt.show()

# 3. Histogram: Workout duration frequency
def chart_duration_histogram():
    durations = [int(row[idx_duration]) for row in rows if row[idx_duration].isdigit()]
    plt.hist(durations, bins=10, color='purple', alpha=0.7, edgecolor='black')
    plt.title("Workout Duration Frequency")
    plt.xlabel("Duration (mins)")
    plt.ylabel("Frequency")
    plt.show()

# 4. Line plot: Average calories per day
def chart_avg_calories_per_day():
    date_calories = {}
    date_counts = {}
    for row in rows:
        day = parse_date(row[idx_date]).date()
        cal = int(row[idx_calories])
        date_calories[day] = date_calories.get(day, 0) + cal
        date_counts[day] = date_counts.get(day, 0) + 1
    days = sorted(date_calories.keys())
    avg_cals = [date_calories[d] / date_counts[d] for d in days]
    plt.plot(days, avg_cals, marker='o', color='orange')
    plt.title("Average Calories per Day")
    plt.xlabel("Date")
    plt.ylabel("Average Calories")
    plt.xticks(rotation=45)
    plt.tight_layout()
    plt.show()

# 5. Bar chart: Total workouts per user
def chart_total_workouts_per_user():
    user_counts = {}
    col=['blue','green','red','purple','brown','violet']
    for row in rows:
        user = row[idx_username]
        user_counts[user] = user_counts.get(user, 0) + 1
    plt.bar(user_counts.keys(), user_counts.values(), color=col)
    plt.title("Total Workouts per User")
    plt.xlabel("User")
    plt.ylabel("Workout Count")
    plt.xticks(rotation=30)
    plt.show()

# ======== Menu ========
def menu():
    while True:
        print("\n=== Workout Tracker Charts ===")
        print("1. Scatter: Calories vs Duration")
        print("2. Box Plot: Heart Rate by Category")
        print("3. Histogram: Workout Duration Frequency")
        print("4. Line Plot: Average Calories per Day")
        print("5. Bar Chart: Total Workouts per User")
        print("0. Exit")

        choice = input("Enter choice: ")

        if choice == "1":
            chart_calories_vs_duration()
        elif choice == "2":
            chart_heart_rate_boxplot()
        elif choice == "3":
            chart_duration_histogram()
        elif choice == "4":
            chart_avg_calories_per_day()
        elif choice == "5":
            chart_total_workouts_per_user()
        elif choice == "0":
            print("Exiting...")
            break
        else:
            print("Invalid choice, try again.")

# Run menu
menu()
