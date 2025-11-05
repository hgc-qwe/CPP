#include<stdio.h>
void func(char a[],int n){
    int i=0;
    int ch;
    while(i<n&&(ch=getchar())!=EOF){
        if(ch=='\n'||ch=='\t'||ch==' ')break;
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
    char arr[n];
    func(arr,n);

    for(int i=0;i<n;i++){
        if(arr[i]=='\n')printf("\\n");
        else if(arr[i]==' ')printf("space");
        else if(arr[i]=='\t')printf("\\t");
        else printf("%c",arr[i]);
    }
    printf("\n");
}