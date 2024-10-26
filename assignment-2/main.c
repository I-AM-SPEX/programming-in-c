
#include <stdio.h>
#include <math.h>


int main () {
    int number;
    int n;
    int sum = 0;
    int digitCount = 0;
    printf("AMSTRONG NUMBER CHECKER\n");
    printf("Enter number: \n");
    scanf("%d",&number);
    n = number;
    while (n > 0)
    {
        n/=10;
        digitCount++;
    }
    n = number;

    while (n > 0)
    {
        int digit = n % 10;
        sum+=pow(digit,digitCount);
        n/=10;
    }

    if(sum == number) {
        printf("%d is an amstrong number\n",number);
    }else {
        printf("%d is not an armstrong number\n",number);
    }
    
    



}