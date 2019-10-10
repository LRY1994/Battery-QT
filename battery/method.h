#include <vector>
#include "struct.h"
using namespace std;

#ifndef METHOD_H
#define METHOD_H

//config.cpp
double getI();
double cal_power(double parent, double child,int layer,double I);
double get_highest_temp(double T,int layer,double I);
double get_lowest_temp(double T,int layer,double I);
double get_firstLayer_temp(int i,int N,double parentT,double I);
double getTime(double lastTime,int layer);
void getDt(int segment,double I);

//tree.cpp,里面用到了config.cpp
void creatBTree(BTNode *&root, double initial,int firstLayerNum,int node_num,double I);
void depthFirstSearch(BTree root,double I);

//spline.cpp
vector<double> interpolation(vector<Point> pointList,int option);
double getValue(double xx);

//main.cpp
vector<double> getMArray(int segment,double initialVal,int firstLayerNum);
double getM(int index);
double getX(int index);
double getY(int index);

#endif // METHOD_H
