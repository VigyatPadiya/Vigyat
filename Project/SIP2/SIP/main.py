import cv2
from deepface import DeepFace
import pygame

# Initialize pygame mixer
pygame.mixer.init()

# Function to play music based on emotion
def play_music(emotion):
    try:
        song = f"{emotion}.mp3"
        pygame.mixer.music.load(song)
        pygame.mixer.music.play()
        print(f"Playing {song} for emotion: {emotion}")
    except:
        print(f"No music found for emotion: {emotion}")

# Start webcam
cap = cv2.VideoCapture(0)
print("Press 'q' to detect emotion, 'e' to exit")

while True:
    ret, frame = cap.read()
    if not ret:
        break

    cv2.imshow("Mood Detection (Press 'q' to detect, 'e' to exit)", frame)
    key = cv2.waitKey(1) & 0xFF

    if key == ord('q'):
        try:
            result = DeepFace.analyze(frame, actions=['emotion'], enforce_detection=False)
            emotion = result[0]['dominant_emotion']
            print(f"Detected Emotion: {emotion}")
            play_music(emotion)
        except Exception as e:
            print(f"Error detecting emotion: {e}")

    elif key == ord('e'):
        print("Exiting...")
        break

cap.release()
cv2.destroyAllWindows()
pygame.mixer.music.stop()
