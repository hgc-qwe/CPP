#include<stdio.h>
void Temperature(double t){
    const double a=5.0/9.0;
    const double b=32.0;
    const double c=273.16;
    double x1=a*(t-b);
    double x2=x1+c;
    printf("%.2f %.2f %.2f\n",t,x1,x2);
}
int main(){
    double t;
    printf("输入摄氏温度：");
    while(scanf("%lf",&t)==1){
        Temperature(t);
        printf("继续输：");
    }
    return 0;
}