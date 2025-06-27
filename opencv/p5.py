import cv2 as cv

face_cascade = cv.CascadeClassifier(cv.data.haarcascades + 'haarcascade_frontalface_default.xml')

capture = cv.VideoCapture(0)

while True:
    ret,frame=capture.read()
    gray=cv.cvtColor(frame,cv.COLOR_BGR2GRAY)

    face= face_cascade.detectMultiScale(gray, scaleFactor = 1.1,minNeighbors=5)

    for (x,y,w,h) in face:
        cv.rectangle(frame,(x,y),(x+w,y+h),(0,225,0),2)

        cv.imshow("Face Dection",frame)

    if cv.waitKey(1) & 0xFF==ord('q'):
        break

capture.release()
cv.destroyAllWindows()
