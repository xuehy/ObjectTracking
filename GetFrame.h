#ifndef GETFRAME_H
#define GETFRAME_H

#include <opencv2/opencv.hpp>
#include "constant.h"

using namespace cv;
string itoa(long x);
/* function that get one frame of color and depth video sequence */
void getframe(int i, Mat &colorImg, Mat &depthImg);
void getCameraParameter(vector <vector <double> > &projectMatrix);
#endif // GETFRAME_H
