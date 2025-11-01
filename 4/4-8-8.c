#include<stdio.h>
int main(){
    const double x=3.785;
    const double y=1.609;
    double s,l;
    scanf("%lf %lf",&s,&l);
    double v=1.0*s/l;
    printf("%.1f\n",v);
    v=(l*x)/(s*y*100);
     printf("%.1f\n",v);
     return 0;
}