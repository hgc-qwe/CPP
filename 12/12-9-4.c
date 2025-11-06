#include<stdio.h>
int count(void){
    static int count=0;
    count++;
    return count;
}
int main(){
    int x=6;
    int y;
    for(int i=0;i<x;i++){
        y=count();
    }
    printf("%d\n",y);
    return 0;
}