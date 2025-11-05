#include<stdio.h>
int max(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>max)max=arr[i];
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=max(arr,n);
    printf("%d\n",x);

    int str[6]={4,5,2,7,18,98};
    int m=6;
    int y=max(str,m);
    printf("\n%d\n",y);
    return 0;
}