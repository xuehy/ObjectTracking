#ifndef __INIT_H_
#define __INIT_H_
#include <opencv2/opencv.hpp>
#include "constant.h"
#include <fstream>
#include <vector>
using namespace cv;
void sampleVertices(vector <vector <double> > &projectMatrix, Mat &colorImg, Mat &depthImg, vector <Point> &mesh_vertex, Mat &cDepthBinary);

#endif
