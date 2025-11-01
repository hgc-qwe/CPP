#include<stdio.h>
int main(){
    double v,x;
    scanf("%lf %lf",&v,&x);
    double t=(x*8.0)/v;
    printf("At %.2f megabits per second,a file of %.2f megabytes\ndownloads in %.2f seconds.\n",v,x,t);
    return 0;
}