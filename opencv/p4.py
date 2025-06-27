import cv2 as cv

image = cv.imread("Photos/batman.png")


resized= cv.resize(image,(1400,800))

#Assigning
#blur = cv.blur(resized,(5,5))
#gaussian = cv.GaussianBlur(resized,(5,5),0)
#median = cv.medianBlur(resized,5)
edges = cv.Canny(resized,100,200)

#Display
#cv.imshow("Resized",resized)
#cv.imshow("Blur",blur)
#cv.imshow("Gaussian Blur",gaussian)
#cv.imshow("Median Blur",median)
cv.imshow("Canny Edges Dectection",edges)


cv.waitKey(0)
cv.destroyAllWindows()