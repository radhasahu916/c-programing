#include <stdio.h>
int main(){
 int month;

printf("enter month");
scanf("%d",&month);

if(month==1){
   printf("january has 31days");
}

else if(month==2){
    printf("february has 28 or 29 days");
}
else if(month==3){
    printf("march has 31 days");
}
else if(month==4){
    printf("april has 30 days ");
}
else if(month==5){
    printf("may has 31 days");
}
else if(month==6){
    printf("june has 30 days ");
}
else if(month==7){
    printf("july has 31 days");
}
else if(month==8){
    printf("august has 30 days");
}
else if(month==9){
printf("september has 31 days");
}
else if(month==10){
    printf("october has 30 days");
}
else if(month==11){
    printf("navember has 30 days");
}
else if(month==12){
    printf("december has 31 days");
}
else{
    printf("invalide month");
}


return 0;

}
