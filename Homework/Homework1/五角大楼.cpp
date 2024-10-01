//
// Created by 何承洋 on 24-10-1.
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    const double cita=M_PI/180*72;
    double cos_cita=cos(cita);
    double sin_cita=sin(cita);
    double x3,y3=0;
    x3=-(x1+(x2-x1)*cos_cita+(y2-y1)*sin_cita);
    y3=-y1-(x2-x1)*sin_cita+(y2-y1)*cos_cita;
    printf("%.3lf %.3f\n",x3,y3);
    return 0;
}