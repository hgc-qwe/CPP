#include<stdio.h>
int main(){
    char ch;
    int count=0;
    printf("Ctrl+D或Ctrl+Z  quit\n");
    while((ch=getchar())!=EOF){
         count++;
    }
    printf("\n%d\n",count);
    return 0;
}