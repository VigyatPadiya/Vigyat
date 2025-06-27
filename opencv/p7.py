import cv2

# Load the image and convert to grayscale
img = cv2.imread('Photos/shapes.bmp')
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Apply threshold to get binary image
_, thresh = cv2.threshold(gray, 240, 255, cv2.THRESH_BINARY)

# Find contours
contours, _ = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

for cnt in contours:
    # Approximate the contour
    approx = cv2.approxPolyDP(cnt, 0.01 * cv2.arcLength(cnt, True), True)
    cv2.drawContours(img, [approx], 0, (0, 0, 0), 2)

    x = approx.ravel()[0]
    y = approx.ravel()[1] - 10

    # Detect shape based on number of vertices
    if len(approx) == 3:
        cv2.putText(img, "Triangle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 0, 0), 2)
    elif len(approx) == 4:
        # Check for square or rectangle
        x1, y1, w, h = cv2.boundingRect(approx)
        aspectRatio = float(w) / h
        shape = "Square" if 0.95 <= aspectRatio <= 1.05 else "Rectangle"
        cv2.putText(img, shape, (x, y), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
    elif len(approx) > 6:
        cv2.putText(img, "Circle", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)

cv2.imshow('Shapes', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
