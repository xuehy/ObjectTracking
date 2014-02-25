#include "GetFrame.h"

#include <fstream>
#include <string>
using namespace std;
/* function that turns an int to string */
string itoa(long x)
{
    stringstream ss;
    string s;
    ss << x;
    ss >> s;
    return s;
}
void getCameraParameter(vector <vector <double> > &projectMatrix)
{
    fstream f;
    f.open(projection_matrix_path,ios::in);
    double tmp;
    projectMatrix.resize(3);

    for(int i = 0; i < 3; i++)
    {
        projectMatrix[i].resize(4);
        for(int j = 0; j < 4; j++)
        {
            f >> tmp;
            projectMatrix[i][j] = tmp;
        }
    }
    f.close();
}

void getframe(int i, Mat &colorImg, Mat &depthImg)
{
    string cf = color_path;
    string num = itoa(i);
    cf = cf + num + ".tiff";

    string df = depth_path +  num + ".png";

    colorImg = imread(cf);
    depthImg = imread(df,CV_LOAD_IMAGE_ANYCOLOR|CV_LOAD_IMAGE_ANYDEPTH);
}

