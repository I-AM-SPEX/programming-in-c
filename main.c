#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
// Function to check if integer is an armstrong number
// Question 1
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
// Question 2
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
// Question 4
double calculateSumOfPrices(int size, float itemPrices[], int itemQuantity[])
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += itemPrices[i] * itemQuantity[i];
    }

    return sum;
}

int calculateDiscount(float total)
{
    int discount = 0;
    if (total < 1000)
    {
        discount = 5;
    }
    else if (total > 1000 && total < 5000)
    {
        discount = 10;
    }
    else if (total > 5000)
    {
        discount = 15;
    }
    return discount;
}

void displayItemsCalculation(int size, float itemPrices[], int itemQuantity[], double total, int discount)
{
    float discountAmount = (discount / 100.00) * total;

    printf("Item        Price         Quantity      Subtotal\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("Item %-5d   BWP %-10.2f %-10d BWP %-10.2f\n", i + 1, itemPrices[i], itemQuantity[i], itemPrices[i] * itemQuantity[i]);
    }

    printf("------------------------------------------------\n");
    printf("TOTAL                           BWP %10.2f\n", total);
    printf("Discount %3d%%                   BWP %10.2f\n", discount, discountAmount);
    printf("GRAND TOTAL                     BWP %10.2f\n", total - discountAmount);
    printf("------------------------------------------------\n");
}

// Question 5
void addition(float a, float b) {
    printf("%f + %f : %f\n",a,b,a+b);
}
void subtraction() {}
void factorial() {}
void multiplication() {}
void division() {}
void calculator(char choice)
{
    switch (choice)
    {
    case '+':
        float a, b;
        printf("Enter first operand: \n");
        scanf("%f", &a);
        printf("Enter second operand: \n");
        addition(a,b);
        break;
    case '-':
        break;
    case '*':
        break;
    case '!':
        break;
    case '/':
        break;
    case '%':
        break;
    default:
        break;
    }
}
void power() {}
void getOperands() {}

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
    // int size;

    // printf("Enter Item and Item Price:  \n");
    // printf("Enter number of items: \n");
    // scanf("%d", &size);
    // int itemQuantity[size];
    // float itemPrices[size];

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter Item %d price: \n", i + 1);
    //     scanf("%f", &itemPrices[i]);
    //     printf("Enter quantity of item %d: \n", i + 1);
    //     scanf("%d", &itemQuantity[i]);
    // }
    // printf("\n");
    // printf("*****************************************************************\n");

    // float total = calculateSumOfPrices(size, itemPrices, itemQuantity);
    // int discount = calculateDiscount(total);
    // displayItemsCalculation(size, itemPrices, itemQuantity, total, discount);

    // 4
    char choice;
    prinf("Simple Scientific Calculator\n");
    printf("\n");
    printf("Enter any of the following operators : +,-,*,!,/,%,\n");
    scanf("%c", &choice);
    calculator(choice);

    return 0;
}
