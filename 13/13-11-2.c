#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
    FILE *source,*target;
    int ch;
    if(argc!=3){
        fprintf(stderr,"用法：%s 源文件 目标文件\n",argv[0]);//输出
        exit(EXIT_FAILURE);
    }
    if((source=fopen(argv[1],"rb"))==NULL){  //二进制文件打开
        fprintf(stderr,"无法打开文件 %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((target = fopen(argv[2], "wb")) == NULL)  //同样
    {
        fprintf(stderr, "无法创建目标文件 %s\n", argv[2]);
        fclose(source);
        exit(EXIT_FAILURE);
    }
    while((ch=getchar())!=EOF){  //逐字符拷贝
        putc(ch,target);    
    }
    fclose(source);
    fclose(target);
    printf("文件拷贝完成: %s->%s\n", argv[1], argv[2]);
}