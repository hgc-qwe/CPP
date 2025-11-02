#include<stdio.h>
int main(){
    double h;
    printf("Enter a height in centimeters:");
    scanf("%lf",&h);
    while(h>0){
        int f=h/30.48;
        double i=(h-f*30.48)/2.54;
        printf("%.1f cm = %d feet,%.1f inches\n",h,f,i);
        printf("Enter a height in centimeters(<=0 to quit):");
        scanf("%lf",&h);
    }
    if(h<=0)printf("bye\n");
    return 0;
}