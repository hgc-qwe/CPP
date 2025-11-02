#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    int w=day/7;
    int d=day%7;
    printf("%d days are %d weeks,%d days.\n",day,w,d);
    return 0;
}