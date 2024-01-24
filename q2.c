#include <stdio.h>

int main() {
    int x, y, z;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", & x, & y, & z);
    int greatest = (x > y) ? ((x > y) ? x : z) : ((y > z) ? y : z);

   
    printf("The greatest number is: %d\n", greatest);

    return 0;
}