#include<stdio.h>
 void p1(void){
    printf("打开功能a\n");
 }
 void p2(void){
    printf("打开功能b\n");
 }
 void p3(void){
    printf("打开功能c\n");
 }
 void p4(void){
    printf("打开功能d\n");
 }


 int main(){
    void(*menu[])(void)={p1,p2,p3,p4};
    char choice[]={'a','b','c','d'};
    char input;
    scanf("%c",&input);
    for(int i=0;i<4;i++){
        if(input==choice[i]){
            menu[i]();
            break;
        }
    }
    return 0;
 }