#include<stdio.h>
void func(char a[],int n){
    int i=0;
    int ch;
    while(i<n&&(ch=getchar())!=EOF){
        a[i]=ch;
        i++;
    }
    while(i<n){
        a[i]='\0';
        i++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char a[n];
    func(a,n);

    for(int i=0;i<n;i++){
        if(a[i]=='\n')printf("\\n");
        else if(a[i]==' ')printf("space");
        else if(a[i]=='\t')printf("\\t");
        else printf("%c",a[i]);
    }
    printf("\n");
}