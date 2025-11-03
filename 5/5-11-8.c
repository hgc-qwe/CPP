#include<stdio.h>
int main(){
    int b;
    printf("This program coputes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&b);
    int a;
    printf("Now eneter the first operand:");
    scanf("%d",&a);
    while(a>0){
        printf("%d %% %d is %d\n",a,b,a%b);
        printf("Eneter next number for first operand(<= 0 to quit):");
        scanf("%d",&a);
    } 
    if(a<=0){
        printf("Done\n");
    } 
    return 0;
}