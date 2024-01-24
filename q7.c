#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter the value of metal\n");
    scanf("%f",&a);
    printf("By using tax as 8 percent and tip as 15 percent\n");
    printf("The final price of metal is ");
   float result=1.23*a;
   int value=round(result);
   printf("The value of metal is %d",value);
}