
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


int getDiscount(int amount) {
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


void outputItemPrices(int discount,int total,int prices[],int quantity[],int arrLength)
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
    int arrLength;
    printf("Item Prices Calculator: \n");
    printf("Enter number of items: \n");
    scanf("%d", &arrLength);
    int prices[arrLength];
    int quantity[arrLength];

    for (int i = 0; i < arrLength; i++)
    {
        printf("Enter price of item at index %d\n", i);
        scanf("%d", &prices[i]);
        printf("Enter item quantity at index %d\n", i);
        scanf("%d", &quantity[i]);
    }

    int totalSum = calculateTotalPrice(prices,quantity,arrLength);
    int discount  = getDiscount(totalSum);
    outputItemPrices(discount,totalSum,prices,quantity,arrLength);
}