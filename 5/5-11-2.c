#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y=x+10;
    while(x<=y){
        printf("%d\n",x++);
    }
    return 0;
}