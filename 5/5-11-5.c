#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    while(count++<n){
        sum+=count;
    }
    printf("sum=%d\n",sum);
    return 0;
}