#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch;
    FILE*fp;
    long long count;
    char file[100];
    scanf("%99s",file);
    if((fp=fopen(file,"r"))==NULL){
        printf("Can't find %s.\n",file);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF){
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lld characters.\n",file,count);
}