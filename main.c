#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
// Function to check if integer is an armstrong number
bool isArmstrongNumber(int number)
{
    int sum = 0;
    int numberOfDigits = floor(log10(abs(number))) + 1; // This line the number of digits of an integer
    int num = number;
    while (num > 0)
    {
        int mod = num % 10;                   // This line gets the last digit of an integer
        sum = sum + pow(mod, numberOfDigits); // This line performs raise to the power operations (X ^ Y)
        num /= 10;
    }

    return (number == sum) ? true : false; // This line returns true or false based on the condtion
}

int displayLargerSum(int arr[], int size)
{
    int sumOfEvenNumbers = 0;
    int sumOfOddNumbers = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumOfEvenNumbers += arr[i];
        }
        else
        {
            sumOfOddNumbers += arr[i];
        }
    }

    return (sumOfOddNumbers > sumOfEvenNumbers) ? sumOfOddNumbers : sumOfEvenNumbers;
}

int calculateSumOfPrices(int size, int itemPrices[], int itemQuantity[])
{
    int sum = 0;
    for(int i=0;i<size;i++) {
        sum+= itemPrices[i] * itemQuantity[i];
    }

    return sum;
}

int main()
{
    // 1
    //  int input;
    //  printf("Check Armstrong Number\n");
    //  printf("Enter Interger: \n");
    //  scanf("%d", &input);
    //  bool result = isArmstrongNumber(input); // isArmstrongNumber function is called on this line.
    //  printf("Armstrong Number: %s \n", result ? "true" : "false");
    // 2
    //  int size;
    //  printf("Enter size of array\n");
    //  scanf("%d", &size);
    //  int numbers[size];
    //  for (int i = 0; i < size; i++)
    //  {
    //      printf("Enter element %d\n", i);
    //      scanf("%d", &numbers[i]);
    //  }

    // int result = displayLargerSum(numbers,size);
    // printf("Larger sum:   %d\n",result);

    // 3
    int size;
    int itemQuantity[size];
    int itemPrices[size];

    printf("Enter Item and Item Price:  ");
    for (int i = 0; i < size; i++)
    {
        printf("Enter Item %s price: ", i + 1);
        scanf("%d", &itemPrices[i]);
        for (int j = 0; j < size; j++)
        {
            printf("Enter quantity of item %s: ", &itemQuantity);
        }
    }

    int total = calculateSumOfPrices(size,itemPrices,itemQuantity);

    return 0;
}
