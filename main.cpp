#include "init.h"
#include <fstream>
#include "GetFrame.h"
using namespace std;
using namespace cv;

int main()
{
  Mat colorImg,depthImg,depthBinary;
  vector <vector <double> > projectMatrix;
  vector <Point> mesh_vertex;
  int frame_ind = 197;
  getCameraParameter(projectMatrix);
  /* fetch the first frame */
  getframe(frame_ind,colorImg,depthImg);
  
  sampleVertices(projectMatrix,colorImg, depthImg,mesh_vertex,depthBinary);
}