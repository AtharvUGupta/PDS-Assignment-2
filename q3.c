#include<stdio.h>
int main(){
    int days;
    printf(" Enter the total number of days\n");
    scanf("%d",&days);
    int c=days/365;
    printf("Years : %d\n",c);
    int d=days%365;
    printf("Months: %d\n",d/30);
    printf("Days: %d\n",d%30);






}