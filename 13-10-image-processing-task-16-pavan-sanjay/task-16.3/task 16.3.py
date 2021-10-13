#importing packages
import cv2

import numpy as np

#getting image link
cap=cv2.imread("masking.jpg")
#function declaration
def fun(x):
    pass
#function for colourmask
def colormasking():
    cv2.namedWindow("masking")
    #refer to these as variables for the next function
    bh='blue high'
    bl = 'blue low'
    gh = 'green high'
    gl = 'green low'
    rh = 'red high'
    rl = 'red low'
    #creating trackbar for different colors as mentioned in the above variables this changes the colour in ths situation.
    cv2.createTrackbar(bl,'masking',0,255,fun)
    cv2.createTrackbar(gl, 'masking', 0, 255, fun)
    cv2.createTrackbar(rl, 'masking', 0, 255, fun)
    cv2.createTrackbar(bh, 'masking', 0, 255, fun)
    cv2.createTrackbar(gh, 'masking', 0, 255, fun)
    cv2.createTrackbar(rh, 'masking', 0, 255, fun)
    #while this is true the trackbar is received
    while True :
        hsv=cv2.cvtColor(cap,cv2.COLOR_RGB2HSV)

        btl=cv2.getTrackbarPos(bl,'masking')
        gtl = cv2.getTrackbarPos(gl, 'masking')
        rtl = cv2.getTrackbarPos(rl, 'masking')
        bth = cv2.getTrackbarPos(bh, 'masking')
        gth = cv2.getTrackbarPos(gh, 'masking')
        rth = cv2.getTrackbarPos(rh, 'masking')

        rgbl=np.array([btl,gtl,rtl],np.uint8)
        rgbh=np.array([bth,gth,rth],np.uint8)

        mask=cv2.inRange(hsv,rgbl,rgbh)
        cv2.imshow("original",cap)
        cv2.imshow('masked',mask)

        k=cv2.waitKey(1)
        if k == 32:
             break
#calling the function here
colormasking()
#destroying all windows on termination of programs
cv2.destroyAllWindows()

