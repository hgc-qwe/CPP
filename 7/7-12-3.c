#include<stdio.h>
int main(){
    int x;
    int sum1=0;
    int count1=0;
    int sum2=0;
    int count2=0;
    while(1){
        scanf("%d",&x);
        if(x==0)break;
        if(x%2==0){
           sum1+=x;
           count1++;
        }
        else if(x%2==1){
            sum2+=x;
            count2++;
        }
    }
    double a=1.0*sum1/count1;
    double b=1.0*sum2/count2;
    printf("偶数个数%d 偶数平均数%.2f 奇数个数%d 奇数平均数%.2f\n",count1,a,count2,b);
}