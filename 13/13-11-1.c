#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch;
    FILE*fp;//文件指针
    long long count;
    char file[100];
    scanf("%99s",file);
    if((fp=fopen(file,"r"))==NULL){//打开文件，只读
        printf("Can't find %s.\n",file);
        exit(EXIT_FAILURE);//终止程序
    }
    while((ch=getc(fp))!=EOF){
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lld characters.\n",file,count);
}