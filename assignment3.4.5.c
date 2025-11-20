#include <stdio.h>
int main(){
int option;int number1;int number2;int sum;int difference;int product;int division;

    printf("1(addition),2(subtraction),3(multiplication),4(division)");
    scanf("%d",&option);

    if(option==1){
        printf("(addition),number1=");
        scanf("%d",&number1);
        printf("number2=");
        scanf("%d",&number2);
        sum=number1+number2;
        printf("sum=%d",sum);
    }

    else if(option==2){
        printf("2(subtraction),number1=");
        scanf("%d",&number1);
        printf("number2=");
        scanf("%d",&number2);
        difference=number1-number2;
        printf("difference=%d",difference);
    }
    else if(option==3){
        printf("3(multiplication),number1=");
        scanf("%d",&number1);
        printf("number2=");
        scanf("%d",&number2);
        product=number1*number2;
        printf("product=%d",product);
    }
    else if(option==4){
        printf("4(division),number1=");
        scanf("%d",&number1);
        printf("number2=");
        scanf("%d",&number2);
        division=number1/number2;
        printf("division=%d",division);
        if(number1==0 || number2==0){
            printf("division by zero is not allowed.");
        }
    }
    else{
        printf("Invalid option selected");
    }


}
