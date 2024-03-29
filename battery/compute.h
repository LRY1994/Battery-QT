#ifndef COMPUTE
#define COMPUTE

#include <vector>
#include "Lookuptable.h"
using namespace std;

class Compute
{
private:
     static constexpr  double Tenv = -10;
     static constexpr   double E = 0;
     static constexpr   double deltax = 0.01;
     static constexpr   double lamda = 0.03;
     static constexpr   double ha = 7.5;
     static constexpr   double A = 0.54;
     static constexpr   double Pmax = 500;
     static constexpr   double Q0 = 37;
     static constexpr   double Ctotal = 19501.272;
     static constexpr   double SOC0 = 1;
     static constexpr   double Uptc = 48;
     vector<double> dt;
     LookuptableModelClass *rtObj;

     void setDt(int segment);
     
     void initRtObj();

     //Qt(还没完成)
     double getQt(double I,double Tnex);

     //R0（还没完成）
     double getR(double T,double I,double Pptc,int layer);

     //cooling power
     double getPcool(double T,double Tnex) ;

     //exo power
     double getPexo(double T,double I,double Pptc,int layer) ;

     //PTC power
     double getPptc(double T,double Tnex,double Pcool,double Pexo,int layer);

     //delta temperature
     double getDeltaT(double Pptc,double Pcool,double Pexo,int layer);

     //delta SOC
     double getDeltaSoc(double parentT, double childT, double parentSOC,int parentLayer,double I);

public:
    Compute(int segment);

    double getI();
    double getTime(double lastTime,int layer);

    //return the max temperature of this node
    double get_max_T(double parentT,int parentLayer,double parentSOC,double I);

    //return the min temperature of this node
    double get_min_T(double parentT,int parentLayer,double parentSOC,double I);

    //return temperature of the first layer
    double get_firstLayer_T(int i,int N,double parentT,double parentSOC,double I);

    //return the remmant soc of this node
    double getSoc(double parentT, double childT, double parentSOC,int parentLayer,double I);

    //return the cost of this transfer from it's parentNode
    double cal_cost(double parentT,double childT,int parentLayer,double parentSOC,double I);

};

#endif // COMPUTE
