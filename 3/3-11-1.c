#include<stdio.h>
int main(){
    float a=3.8e38;
    float b=0.3e-48;
    a++;
    b/=10;
    printf("%f %e\n",a,b);
    return 0;
}