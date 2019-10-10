#ifndef CURRENT_H
#define CURRENT_H
#include "struct.h"
#include <vector>

using namespace  std;


class Current
{
public:  
    vector<Point> ponits;

    Current();
    //data process
    void processData(char* fileName,int from ,int to);


};

#endif // CURRENT_H
