#include<stdio.h>
int main(){
    int totalhours;
    int minutes;
    int hours;

    printf("enter total number");
    scanf("%d",&totalhours);

    hours=totalhours/60;
    minutes=totalhours%60;

    printf("hourse %d", hours);
    printf("minutes %d",minutes);
    }
