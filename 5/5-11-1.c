#include<stdio.h>
int main(){
    const int a=60;
    int x;
    scanf("%d",&x);
    while(x>0){
        printf("%d时%d分\n",x/a,x%a);
        scanf("%d",&x);
    }
    return 0;
}