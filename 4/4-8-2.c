#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s",name);
    int len=strlen(name)+3;
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("%*s\n",len,name);
    return 0;
}