#include<iostream>

using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    double X1=max(R1.x,R2.x);
    double X2=min(R1.x+R1.w,R2.x+R2.w);
    double y1=min(R1.y,R2.y);
    double y2=max(R1.y-R1.h,R2.y-R2.h);
    
    double area = (X2-X1)*abs(y1-y2);
    if(area<0){
        return 0;
    }else{
        return area;
    }

}
