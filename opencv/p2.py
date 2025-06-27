import cv2 as cv
import numpy as np

blank = 255*np.ones((500,500,3),dtype=np.uint8)

cv.line(blank,(0,0),(400,400),(225,0,0),6)
cv.rectangle(blank,(2,2),(300,400),(0,0,0),5)
cv.circle(blank,(250,250),200,(150,200,100),8)
cv.imshow("Blank",blank)
cv.waitKey(0)
