import cv2 as cv

image = cv.imread("Photos/vigyat.jpg")
gray = cv.cvtColor(image,cv.COLOR_BGR2GRAY)
resized = cv.resize(image,(600,400))

cv.imshow("Vigyat",image)
cv.imshow("Gray",gray)
cv.imshow("Resized",resized)

cv.imwrite("Photos/Resized_Image.jpg",resized)

cv.waitKey(0)
cv.destroyAllWindows()