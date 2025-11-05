#include<stdio.h>
void copy_arr(double target1[],double source[],int x){
    for(int i=0;i<5;i++){
       target1[i]=source[i];
    }
}
void copy_ptr(double target2[],double source[],int x){
    double* q=&source[0];
    for(int i=0;i<5;i++){
        target2[i]=*q;
        q++;
    }
}
void copy_ptrs(double target3[],double source[],double* p){
    for(int i=4;i>=0;i--){
        target3[i]=*p;
        p--;
    }
}
int main(){
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double* p=&source[4];
    double target3[5];
    int x=5;
    copy_arr(target1,source,x);
    copy_ptr(target2,source,x);
    copy_ptrs(target3,source,p);
    for(int i=0;i<5;i++){
        printf("%.1f ",target1[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%.1f ",target2[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%.1f ",target3[i]);
    }
    printf("\n");
    return 0;
}
