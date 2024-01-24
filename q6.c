#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of number ");
    scanf("%d",&a);
    

    a>200||a<100?printf("NOT IN RANGE"):a%2==0? printf("FALSE"):printf("TRUE");



}