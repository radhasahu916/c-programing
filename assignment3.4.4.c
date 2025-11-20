#include <stdio.h>
int main(){
int option;int radius;float area;int length;int width;float rectangle;int base;int height;float triangle;

    printf("enter 1(circle),2(rectangle) and 3(triangle) :");
    scanf("%d",&option);

    if(option==1){
        printf("1 (circle),radius =");
        scanf("%d",&radius);
        area=3.14*radius*radius;
        printf("area of the circle =%.2f",area);
    }
    else if (option==2) {
          printf("2(rectangle),length=");
          scanf("%d",&length);
          printf("width=");
          scanf("%d",&width);
          rectangle=length*width;
          printf("area of the rectangle=%.2f",rectangle);

    }
    else if(option==3){
        printf("3(triangle),base=");
        scanf("%d",&base);
        printf("Height=");
        scanf("%d",&height);
        triangle=0.5*base*height;
        printf("area of the triangle=%.2f",triangle);
    }
    else{
        printf("Invalid option selected");
    }

}

