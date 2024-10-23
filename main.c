#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool isArmstrongNumber(int number)
{
    int sum = 0;
    int numberOfDigits = floor(log10(abs(number))) + 1;
    int num = number;
    while (num > 0)
    {
        int mod = num % 10;
        sum = sum + pow(mod, numberOfDigits);
        num /= 10;
    }
    
    return (number == sum) ? true : false;
}

int main()
{
    int input;
    printf("Check Armstrong Number\n");
    printf("Enter Interger: \n");
    scanf("%d",&input);
    bool result = isArmstrongNumber(input);
    printf("Armstrong Number: %s \n", result ? "true" : "false");
    return 0;
}
