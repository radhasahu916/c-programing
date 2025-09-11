#include<stdio.h>
int main() {
   int hours;
   int minute;
   int totalminute;

  printf("enter hours");
  scanf("%d",&hours);

  printf("enter the minute:");
  scanf("%d",&minute);

  totalminute=(60*hours)+minute;

  printf("totalminute%d",totalminute);

}
