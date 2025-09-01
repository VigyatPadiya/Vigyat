import os
import sys
import speech_recognition as sr
from datetime import datetime

# Constants
PASS_PHRASE = "open diary"
MISSION_LOG_FILE = "agent_logs.txt"


def authenticate():
    """Authenticate user using voice passphrase"""
    recognizer = sr.Recognizer()
    print("\n🎤 Say the passphrase to unlock (you have 5 seconds)...")
    try:
        with sr.Microphone() as source:
            recognizer.adjust_for_ambient_noise(source, duration=1)
            audio = recognizer.listen(source, timeout=5, phrase_time_limit=5)

        text = recognizer.recognize_google(audio).lower()
        print(f"🗣 You said: {text}")

        if text == PASS_PHRASE:
            print("✅ Authentication successful!\n")
            return True
        else:
            print("❌ Incorrect passphrase. Access Denied.\n")
            return False
    except sr.UnknownValueError:
        print("⚠️ Could not understand audio.\n")
    except sr.WaitTimeoutError:
        print("⚠️ No speech detected.\n")
    except Exception as e:
        print(f"⚠️ Error occurred: {e}\n")

    return False


def store_report():
    """Store new mission report"""
    report = input("\n📝 Enter mission report (leave empty to cancel):\n")
    if not report.strip():
        print("⚠️ Empty report not saved.")
        return

    try:
        with open(MISSION_LOG_FILE, "a", encoding="utf-8") as file:
            timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
            file.write(f"[{timestamp}]\n{report}\n---\n")
        print("✅ Report saved successfully!\n")
    except Exception as e:
        print(f"⚠️ Failed to save report: {e}\n")


def review_logs():
    """Display saved mission logs"""
    print("\n📂 Mission Logs:\n")
    if os.path.exists(MISSION_LOG_FILE):
        try:
            with open(MISSION_LOG_FILE, "r", encoding="utf-8") as file:
                content = file.read().strip()
                print(content if content else "No mission logs found.\n")
        except Exception as e:
            print(f"⚠️ Failed to load logs: {e}\n")
    else:
        print("No mission logs found.\n")


def mission_control():
    """Main menu after authentication"""
    while True:
        print("===== Mission Control =====")
        print("1. Log New Report")
        print("2. Review Logs")
        print("3. Exit")
        choice = input("Select an option (1,2,3): ").strip()

        if choice == "1":
            store_report()
        elif choice == "2":
            review_logs()
        elif choice == "3":
            print("👋 Exiting Mission Control. Goodbye Agent.")
            sys.exit(0)
        else:
            print("⚠️ Invalid choice. Try again.\n")


if __name__ == "__main__":
    print("=== Mission Log System v1.0 ===")

    # Keep asking until correct authentication
    while not authenticate():
        pass

    # Enter mission control after authentication
    mission_control()
