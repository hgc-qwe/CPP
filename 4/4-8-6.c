#include<stdio.h>
#include<string.h>
int main(){
    char b[100];
    char a[100];
    printf("名\n");
    scanf("%s",b);
    printf("姓\n");
    scanf("%s",a);
    int A=strlen(a);
    int B=strlen(b);
    printf("%s %s\n",a,b);
    printf("%*d %*d\n",A,A,B,B);

    printf("%s %s\n",a,b);
    printf("%-*d %-*d\n",A,A,B,B);

}