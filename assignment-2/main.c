
#include <stdio.h>
#include <math.h>

int calculateTotalPrice(int prices[], int quantity[], int arrLength)
{
    int total = 0;
    for (int i = 0; i < arrLength; i++)
    {
        total += prices[i] * quantity[i];
    }

    return total;
}

int getDiscount(int amount)
{
    int discount = 0;
    if (amount < 1000)
    {
        discount = 5;
    }
    else if (amount > 1000 && amount < 5000)
    {
        discount = 10;
    }
    else if (amount > 5000)
    {
        discount = 15;
    }
    return discount;
}

void outputItemPrices(int discount, int total, int prices[], int quantity[], int arrLength)
{
    int discounted = (discount / 100.00) * total;

    printf("Item        Price         Quantity      Subtotal\n");

    for (int i = 0; i < arrLength; i++)
    {
        printf("Item %-5d   BWP %-10.2d %-10d BWP %-10.2d\n", i + 1, prices[i], quantity[i], prices[i] * quantity[i]);
    }

    printf("TOTAL                           BWP%5.2d\n", total);
    printf("Discount %3d%%                   BWP%5.2d\n", discount, discounted);
    printf("GRAND TOTAL                     BWP%5.2d\n", total - discounted);
}

float add(float x, float y)
{
    return x + y;
}

float substract(float x, float y)
{
    return x - y;
}

float multiply(float x, float y)
{
    return x * y;
}
void divide(float x, float y)
{
    if (y == 0)
    {
        printf("Undefined, cannot divide by zero\n");
    }
    else
    {
        int asnwer = x / y;
        printf("%0.2f / %0.2f = %0.2f\n", x, y, asnwer);
    }
}

float power(float x, float y)
{
    float result = x;
    for (int i = 1; i < y; i++)
    {
        result *= x;
    }

    return result;
}

void swapNumbers(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
};

struct person
{
    char firstName[50];
    char lastName[50];
    int age;
    char gender;
    char occupation[50];
};

int main()
{
    // Q1LauNDARRY
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

    // int oddSum = 0;
    // int evenSum = 0;
    // int arrLength;
    // printf("Larger Sum Program:\n");
    // printf("Input length of array:\n");
    // scanf("%d", &arrLength);
    // int arr[arrLength];
    // for (int i = 0; i < arrLength; i++)
    // {
    //     printf("Enter element at index %d\n", i);
    //     scanf("%d", &arr[i]);
    // }

    // for (int j = 0; j < arrLength; j++)
    // {
    //     if(arr[j] % 2 == 0)   {
    //         evenSum+=arr[j];
    //     }else {
    //         oddSum+=arr[j];
    //     }
    // }

    // (evenSum > oddSum)? printf("Larger sum is %d\n",evenSum) : printf("Larger sum is %d\n",oddSum);

    // Q3
    // int arrLength;
    // printf("Item Prices Calculator: \n");
    // printf("Enter number of items: \n");
    // scanf("%d", &arrLength);
    // int prices[arrLength];
    // int quantity[arrLength];

    // for (int i = 0; i < arrLength; i++)
    // {
    //     printf("Enter price of item at index %d\n", i);
    //     scanf("%d", &prices[i]);
    //     printf("Enter item quantity at index %d\n", i);
    //     scanf("%d", &quantity[i]);
    // }

    // int totalSum = calculateTotalPrice(prices,quantity,arrLength);
    // int discount  = getDiscount(totalSum);
    // outputItemPrices(discount,totalSum,prices,quantity,arrLength);

    // Q4
    // char chosenOperator;
    // float x, y;
    // float result;
    // printf("Calculator Program\n");
    // printf("Input any of the stated operator: +,-,/,*,^\n");
    // scanf("%c", &chosenOperator);

    // switch (chosenOperator)
    // {
    // case '+':
    //     printf("Enter first number: \n");
    //     scanf("%f", &x);
    //     printf("Enter second number: \n");
    //     scanf("%f", &y);
    //     result = add(x, y);
    //     printf("Answer: %0.2f\n", result);
    //     break;
    // case '-':
    //     printf("Enter first number: \n");
    //     scanf("%f", &x);
    //     printf("Enter second number: \n");
    //     scanf("%f", &y);
    //     result = substract(x, y);
    //     printf("Answer: %0.2f\n", result);

    //     break;
    // case '/':
    //     printf("Enter first number \n");
    //     scanf("%f", &x);
    //     printf("Enter second number: \n");
    //     scanf("%f", &y);
    //     divide(x, y);
    //     break;
    // case '*':
    //     printf("Enter first number: \n");
    //     scanf("%f", &x);
    //     printf("Enter second number: \n");
    //     scanf("%f", &y);
    //     result = multiply(x, y);
    //     printf("Answer: %0.2f\n", result);

    //     break;
    // case '^':
    //     printf("Enter first number: \n");
    //     scanf("%f", &x);
    //     printf("Enter second number: \n");
    //     scanf("%f", &y);
    //     result = power(x, y);
    //     printf("Answer: %0.2f\n", result);

    //     break;

    // default:
    //     printf("Undefine operator\n");
    //     break;
    // }

    // Q5
    // int x;
    // int y;

    // printf("Swap by referecne program\n");
    // printf("Enter number 1: \n");
    // scanf("%d", &x);
    // printf("Enter number 2: \n");
    // scanf("%d", &y);
    // printf("Before \n");
    // printf("x: %d\n", x);
    // printf("y: %d\n", y);
    // printf("After \n");
    // swapNumbers(&x, &y);
    // printf("x: %d\n", x);
    // printf("y: %d\n", y);

    // Q6
    // printf("Create a Struct:\n");
    // struct person person1;
    // struct person person2;

    // printf("Enter person1 first name: \n");
    // scanf("%s", &person1.firstName);
    // printf("Enter person1 last name: \n");
    // scanf("%s", &person2.lastName);

    // printf("Enter person2 first name: \n");
    // scanf("%s", &person2.firstName);
    // printf("Enter person2 last name: \n");
    // scanf("%s", &person2.lastName);

    // printf("Enter person1 age: \n");
    // scanf("%d", &person1.age);

    // printf("Enter person2 age: \n");
    // scanf("%d", &person2.age);

    // printf("Enter person1 gender: \n");
    // scanf(" %c", &person1.gender);

    // printf("Enter person2 gender: \n");
    // scanf(" %c", &person2.gender);

    // printf("Enter person1 occupation:  \n");
    // scanf("%s", &person1.occupation);

    // printf("Enter person2 occupation:  \n");
    // scanf("%s", &person2.occupation);

    // printf("Person1 Information\n");
    // printf("\n");
    // printf("Name: %s %s\n", person1.firstName, person1.lastName);
    // printf("Age: %d\n", person1.age);
    // printf("Gender: %c\n", person1.gender);
    // printf("Occuaption: %s\n", person1.occupation);

    // printf("Person2 Information\n");
    // printf("\n");
    // printf("Name: %s %s\n", person2.firstName, person2.lastName);
    // printf("Age: %d\n", person2.age);
    // printf("Gender: %c\n", person2.gender);
    // printf("Occuaption: %s\n", person2.occupation);

    // Q7
    FILE *f;
    char nameOfFile[] = "student-marks.txt";
    int arrLength;
    printf("File Handling Problem: \n");
    printf("Enter number the number of students: \n");
    scanf("%d", &arrLength);
    char students[arrLength][50];
    int marks[arrLength];
    for (int i = 0; i < arrLength; i++)
    {
        printf("Enter student name at index %d: \n", i);
        scanf("%s", &students[i]);
        printf("Enter student mark at index %d: \n", i + 1);
        scanf("%d", &marks[i]);
    }
    f = fopen(nameOfFile, "r");
    if (f == NULL)
    {
        f = fopen(nameOfFile, "w");
        printf("Created new file\n");
        fprintf(f, "Student     Mark\n");
        for (int i = 0; i < arrLength; i++)
        {

            fprintf(f, "%-10s %d\n", students[i], marks[i]);
        }

        fclose(f);
    }
    else
    {
        fclose(f);
        f = fopen(nameOfFile, "a");

        for (int i = 0; i < arrLength; i++)
        {
            fprintf(f, "%-12s %d\n", students[i], marks[i]);
        }

        printf("Added student marks.\n");
        fclose(f);
    }
}