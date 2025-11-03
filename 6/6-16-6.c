#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){
        long long a=i*i;
        long long b=i*i*i;
        printf("%d %lld %lld\n",i,a,b);
    }
    return 0;

}