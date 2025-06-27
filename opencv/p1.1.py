import cv2 as cv

capture =  cv.VideoCapture('Photos/tanjiro.mp4')

while True:
    isTrue,frame=capture.read()

    resized=cv.resize(frame,(800,500))
    cv.imshow("Video",resized)

    if cv.waitKey(20) & 0xFF==ord('q'):
        break
capture.release()
cv.destroyAllWindows()