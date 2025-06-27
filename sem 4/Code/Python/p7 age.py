age=int(input("Enter Age :"))

if age<12:
    print("You are a Kid")
elif 12<=age and age<=17:
    print("You are teenager")
elif 18<=age and age<=60:
    print("You are Adult")
else:
    print("You are Senior Citizen")

