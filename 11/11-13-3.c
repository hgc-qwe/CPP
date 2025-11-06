#include<stdio.h>
#include<ctype.h>
int func(char str[],int n){
    int ch;
    while((ch=getchar())!=EOF&&isspace(ch)){
        continue;
    }
    if(ch==EOF){
        str[0]='\0';
        return 0;
    }
    int i=0;
    if(i<n-1){
        str[i++]=ch;
    }
    while((ch=getchar())!=EOF&&!isspace(ch)&&i<n-1){
        str[i++]=ch;
    }
    str[i]='\0';
    while(ch!='\n'&&ch!=' '){
        ch=getchar();
    }

    return i;
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char str[n];
    int x=func(str,n);
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n%d\n",x);
    return 0;
}
