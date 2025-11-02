#include<stdio.h>
long long func(int x){
    long long y=x*x*x;
    return y;
}
int main(){
    int x;
    scanf("%d",&x);
    long long a=func(x);
    printf("%lld\n",a);
    return 0;
}