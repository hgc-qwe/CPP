#include<stdio.h>
#include<string.h>
struct month {
    char name[10];
    char n[4];
    int day;
    int num;
};
struct month months[12]={
    {"January",   "Jan", 31, 1},
    {"February",  "Feb", 28, 2},
    {"March",     "Mar", 31, 3},
    {"April",     "Apr", 30, 4},
    {"May",       "May", 31, 5},
    {"June",      "Jun", 30, 6},
    {"July",      "Jul", 31, 7},
    {"August",    "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October",   "Oct", 31, 10},
    {"November",  "Nov", 30, 11},
    {"December",  "Dec", 31, 12}
};

int func(char* na){
    int sum=0;
    for(int i=0;i<12;i++){
        sum+=months[i].day;
        if(strcmp(na,months[i].name)==0)return sum;
    }
    return -1;
}

int main(){
    char na[10];
    scanf("%s",na);
    int sum=func(na);
    printf("%d\n",sum);
    return 0;
}