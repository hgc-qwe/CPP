#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct month {
    char name[20];
    char abbrev[4];
    int days;
    int num;
};

struct month months[12] = {
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


int func1(char* month){
    if(isdigit(month[0])){
        int mon=atoi(month);
        if(mon>=1&&mon<=12)return mon;
        else return -1;
    }
    
    
    for (int i = 0; i < 12; i++) {
        char names[20], abbrevs[4];
        
        strcpy(names, months[i].name);
        
        strcpy(abbrevs, months[i].abbrev);
        
        if (strcmp(month, names) == 0 || 
            strcmp(month, abbrevs) == 0) {
            return i + 1; 
        }
    }  
    return -1; 
}

int func2(int year){
    if((year%4==0&&year%100!=0)||year%400==0)return 1;
    return 0;
}


int func3(int day,int month,int year){
    int sum=0;
    for(int i=0;i<month-1;i++){
        sum+=months[i].days;

        if(i==1&&func2(year))sum++;
    }
    sum+=day;

    return sum;
}

int main(){
    printf("day:");
    int day;
    scanf("%d",&day);
    printf("month:");
    char month[10];
    scanf("%s",month);
    printf("year:");
    int year;
    scanf("%d",&year);
    int m;
    m=func1(month);
    int total=func3(day,m,year);
    printf("%d\n",total);
    return 0;
}