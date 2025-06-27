import cv2 as cv
import numpy as np

capture= cv.VideoCapture(0)

while True:
    ret,frame= capture.read()

    hsv = cv.cvtColor(frame,cv.COLOR_BGR2HSV)

    lower_blue = np.array([100,150,0])
    upper_blue = np.array([140,225,225])

    mask=cv.inRange(hsv,lower_blue,upper_blue)

    result=cv.bitwise_and(frame,frame,mask=mask)

    cv.imshow("Orignal",frame)
    cv.imshow("Blue",mask)
    cv.imshow("Result",result)

    if cv.waitKey(1) & 0xFF == ord('q'):
        break
capture.release()
cv.destroyAllWindows()