#include "current.h"
#include "struct.h"
#include <fstream>
#include <cstring>
#include "stdio.h"
#include "var.h"
#include "assert.h"
using namespace  std;

vector<string> split(const string& str, const string& delim) {
    vector<string> res;
    if("" == str) return res;
    //先将要切割的字符串从string类型转换为char*类型
    char * strs = new char[str.length() + 1] ;
    strcpy(strs, str.c_str());

    char * d = new char[delim.length() + 1];
    strcpy(d, delim.c_str());

    char *p = strtok(strs, d);
    while(p) {
        string s = p; //分割得到的字符串转换为string类型
        res.push_back(s); //存入结果数组
        p = strtok(NULL, d);
    }

    return res;
}

Current::Current()
{
    processData("UDDS.txt",0 ,10);
}



//data process
void Current::processData(char* fileName, int from, int to){
    ifstream readstream;
     printf("beforeopen");
    readstream.open(string(fileName).data());
    assert(readstream.is_open());

    int i = 0;

    while (!readstream.eof()){
        string inbuf;
        getline(readstream, inbuf, '\n');
         printf("i");
        write<<inbuf;
        if(i<=to && i >=from){
            vector<string> res = split(inbuf, " ");
//            points.push_back(Point(int(res[0]),double(res[1])))
        }
        if(i>to) break;
        i++;
    }
    readstream.close();

}
