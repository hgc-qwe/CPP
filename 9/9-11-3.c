#include<stdio.h>
void ever(char ch,int a,int b){
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main(){
    char ch;
    int i,j;
    scanf("%c %d %d",&ch,&i,&j);
    ever(ch,i,j);
    return 0;
}