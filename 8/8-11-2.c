#include<stdio.h>
int main(){
    char ch;
    int count=0;
    while((ch=getchar())!=EOF){
        count++;
        if(ch=='\n')printf("\\n,%d",ch);
        else if(ch=='\t')printf("\\t,%d",ch);
        else if(ch<' '||ch>127)printf("^%c,%d",ch+64,ch);
        else printf("%c,%d",ch,ch);
        if(count%10!=0)printf(" ");
        if(count%10==0)printf("\n");
    }
    printf("\n");
    return 0;
}