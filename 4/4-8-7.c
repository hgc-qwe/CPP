#include<stdio.h>
#include<float.h>
int main(){
    double x=1.0/3.0;
    float y=1.0/3.0;
    printf("%.6f %.12f %.16f\n",x,x,x);
    printf("%.6f %.12f %.16f\n",y,y,y);
    printf("%d %d\n",FLT_DIG,DBL_DIG);
}