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
// Question 3
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

// Question 4
void addition(float a, float b)
{
    printf("%0.2f + %0.2f = %0.2f\n", a, b, a + b);
}
void subtraction(float a, float b)
{
    printf("%0.2f - %0.2f = %0.2f\n", a, b, a - b);
}
float factorial(float a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
void multiplication(float a, float b)
{
    printf("%0.2f * %0.2f = %0.2f\n", a, b, a * b);
}
void division(float a, float b)
{
    if (b > 0)
    {
        printf("%0.2f / %0.2f = %0.2f\n", a, b, a / b);
    }
    else
    {
        printf("Cant divide by zero\n");
    }
}
void percentage(float a)
{
    printf("Percentage of %0.2f is = %0.2f\n", a, a / 100.00);
}
void power(float a, float b)
{
    printf("%0.2f ^ %0.2f = %0.2f\n", a, b, pow(a, b));
}

void calculator(char choice)

{
    float a, b;

    switch (choice)
    {
    case '+':
        printf("Enter first operand: \n");
        scanf("%f", &a);
        printf("Enter second operand: \n");
        scanf("%f", &b);
        addition(a, b);
        break;
    case '-':
        printf("Enter first operand: \n");
        scanf("%f", &a);
        printf("Enter second operand: \n");
        scanf("%f", &b);
        subtraction(a, b);
        break;
    case '*':
        printf("Enter first operand: \n");
        scanf("%f", &a);
        printf("Enter second operand: \n");
        scanf("%f", &b);
        multiplication(a, b);
        break;
    case '!':
        printf("Enter factorial operand\n");
        scanf("%f", &a);
        float result = factorial(a);
        printf("%0.2f!=%0.2f", a, result);
        break;
    case '/':
        printf("Enter first operand: \n");
        scanf("%f", &a);
        printf("Enter second operand: \n");
        scanf("%f", &b);
        division(a, b);
        break;
    case '%':
        printf("Enter operand\n");
        scanf("%f", &a);
        percentage(a);

        break;
    case '^':
        printf("Enter first operand: \n");
        scanf("%f", &a);
        printf("Enter second operand: \n");
        scanf("%f", &b);
        power(a, b);
    default:
        break;
    }
}

// Question 5
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

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
    // char choice;
    // printf("Simple Scientific Calculator\n");
    // printf("\n");
    // printf("Enter any of the following operators : +,-,*,!,/,%,^,\n");
    // scanf("%c", &choice);
    // calculator(choice);

    // 5
    int a;
    int b;
    printf("Program to Swap two integers by reference\n");
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    printf("Before Swapping\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("After Swapping\n");
    swapByReference(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
