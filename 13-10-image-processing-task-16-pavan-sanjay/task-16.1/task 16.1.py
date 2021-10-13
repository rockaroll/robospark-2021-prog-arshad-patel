#here modules opencv and numpy are imported
import cv2
import numpy as np
#we are reading the image to process here
img1=cv2.imread("morphology.JPG")
#np.ones is a command that creates arrays of ones,here we are using np.uint8 as the datatype of this array
kernel = np.ones((5,5), np.uint8)
#this is the erode function with image in question,kernel(the matrix we are going to use),and iterations esentially it removes the top layer like soil erosion
img_erosion= cv2.erode(img1,kernel,iterations=1)
#this is the command of dialation same parameters as above except magnify the image
img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)
#to display each type of image
cv2.imshow('Input', img1)
cv2.imshow('Erosion', img_erosion)
cv2.imshow('Dilation', img_dilation)
#this is to activate the destroy all windows on pressing the wait key that is the cross button
cv2.waitKey(0)
cv2.destroyAllWindows()