#include<stdio.h>
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(ch='A';ch<='A'+i-1;ch++){
            printf("%c",ch);
        }
        for(ch='A'+i-2;ch>='A';ch--){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}