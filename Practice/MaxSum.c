/*Write a C program that accepts a sequence of different values and calculates the sum of the values before and after the maximum value.
The sum of the values before the maximum value is 0, if there are no values before the maximum. Similarly, the sum of the values after the maximum value is 0, if there are no values after the maximum.*/

#include <stdio.h>

int main()
{
    int size;

    printf("Enter the Size of the Array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Error in declaring Size. Kindly enter a value greater than zero!\n");
    }
    else
    {
        int arrNumb[size];
        printf("Please Enter the Sequence of Numbers: ");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arrNumb[i]);
        }

        int maxIndex = 0;
        for (int i = 1; i < size; i++)
        {
            if (arrNumb[i] > arrNumb[maxIndex])
            {
                maxIndex = i;
            }
        }

        int sumBeforeMax = 0;
        for (int i = 0; i < maxIndex; i++)
        {
            sumBeforeMax += arrNumb[i];
        }

        int sumAfterMax = 0;
        for (int i = maxIndex + 1; i < size; i++)
        {
            sumAfterMax += arrNumb[i];
        }

        printf("Sum before the maximum value: %d\n", sumBeforeMax);
        printf("Sum after the maximum value: %d\n", sumAfterMax);
    }

    return 0;
}
