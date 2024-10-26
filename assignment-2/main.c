
#include <stdio.h>
#include <math.h>

int main()
{
    // Q1
    // int number;
    // int n;
    // int sum = 0;
    // int digitCount = 0;
    // printf("AMSTRONG NUMBER CHECKER\n");
    // printf("Enter number: \n");
    // scanf("%d",&number);
    // n = number;
    // while (n > 0)
    // {
    //     n/=10;
    //     digitCount++;
    // }
    // n = number;

    // while (n > 0)
    // {
    //     int digit = n % 10;
    //     sum+=pow(digit,digitCount);
    //     n/=10;
    // }

    // if(sum == number) {
    //     printf("%d is an amstrong number\n",number);
    // }else {
    //     printf("%d is not an armstrong number\n",number);
    // }

    // Q2

    int oddSum = 0;
    int evenSum = 0;
    int arrLength;
    printf("Larger Sum Program:\n");
    printf("Input length of array:\n");
    scanf("%d", &arrLength);
    int arr[arrLength];
    for (int i = 0; i < arrLength; i++)
    {
        printf("Enter element at index %d\n", i);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < arrLength; j++)
    {
        if(arr[j] % 2 == 0)   {
            evenSum+=arr[j];
        }else {
            oddSum+=arr[j];
        }
    }


    

    (evenSum > oddSum)? printf("Larger sum is %d\n",evenSum) : printf("Larger sum is %d\n",oddSum);
}