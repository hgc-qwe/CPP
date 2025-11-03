#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    int upper=0;
    int lower=0;
    while((ch=getchar())!=EOF){
        if(isupper(ch))upper++;
        if(islower(ch))lower++;
    }
    printf("upper=%d lower=%d\n",upper,lower);
    return 0;
}