#importing a modules
import cv2
img=cv2.imread("thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
#this is used to resize image
img=cv2.resize(img,(400,400))

#this is used to resize the thresh_binary image
ret,simple_thresh= cv2.threshold(img,150,255,cv2.THRESH_BINARY)
#this is used to resize the thresh binary_inv image
ret,simple_thresh1= cv2.threshold(img,150,255,cv2.THRESH_BINARY_INV)
#img show is meant to display the image
cv2.imshow(" grayscale normal",img)
cv2.imshow("simple_thresh_1",simple_thresh)
cv2.imshow("simple_thresh_inv_2",simple_thresh1)
#imgwrite writes it to said window
cv2.imwrite("Original grayscale.jpg",img)
cv2.imwrite("simple_thresh.jpg",simple_thresh)
cv2.imwrite("simple_thresh_inv.jpg",simple_thresh1)
cv2.waitKey(0)
#similar as previous comment
adaptive_thresh= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh0= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_mean",adaptive_thresh)
cv2.imshow("adapt_mean_inv",adaptive_thresh0)
#imgwrite writes it to said window
cv2.imwrite("Original grayscale.jpg",img)
cv2.imwrite("adapt_mean.jpg",adaptive_thresh)
cv2.imwrite("adapt_mean_inv.jpg",adaptive_thresh0)
cv2.waitKey(0)

adaptive_thresh1= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh2= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,5,2)
#img show is meant to display the image
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_guass",adaptive_thresh1)
cv2.imshow("adapt_guass_inv",adaptive_thresh2)
#imgwrite writes it to said window
cv2.imwrite("Original grayscale.jpg",img)
cv2.imwrite("adapt_guass.jpg",adaptive_thresh1)
cv2.imwrite("adapt_guass_inv.jpg",adaptive_thresh2)

cv2.waitKey(0)
cv2.destroyAllWindows()