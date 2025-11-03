#include<stdio.h>
int main(){
    char ch;
    int space=0;
    int newline=0;
    int others=0;
    while((ch=getchar())!='#'){
        if(ch==' ')space++;
        else if(ch=='\n')newline++;
        else others++;
    }
    printf("space=%d\nnewline=%d\nothers=%d\n",space,newline,others);
    return 0;
}