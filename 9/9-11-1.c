#include<stdio.h>
double min(double a,double b){
    return (a>b)?b:a;
}
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%.3f\n",min(a,b));

    printf("min(3.6,8.5)=%.3f\n",min(3.6,8.5));
    printf("min(0.8,7.4)=%.3f\n",min(0.8,7.4));
    return 0;
}