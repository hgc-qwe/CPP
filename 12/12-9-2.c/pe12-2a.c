#include<stdio.h>
#include "pe12-2a.h"

static int mode;
static double distance;
static double fuel;

void set_mode(int m){
    if(m!=0&&m!=1){
        printf("Invalid mode specified.Mode %d(%s) used.\n",mode,mode==0?"metric":"US");  //示范输入
    }
    else{
        mode=m;
    }
}

void get_info(void){
    if(mode==0){
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf",&fuel);
    }
    else{
        printf("Enter distance traveled in miles: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf",&fuel);
    }
}

void show_info(void){
    if(mode==0){
        double x=(fuel/distance)*100;
        printf("Fuel consumption is %.2f liters per 100 km.\n",x);
    }
    else if(mode==1){
        double y=distance/fuel;
        printf("Fuel consumption is %.1f miles per gallon.\n",y);
    }
}