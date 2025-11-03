#include<stdio.h>
int main(){
    char ch;
    for(int i=5;i>=0;i--){
        for(ch=('A'+i);ch>='A';ch--){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}