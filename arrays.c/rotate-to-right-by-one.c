#include <stdio.h>
void arraypostn(int *arr1, int arrSize)
{
    int i, temp;
      temp = arr1[0];
    for(i = 0; i < arrSize-1; i++)
    {
        arr1[i] = arr1[i+1];
    }
    arr1[i] = temp;
}

void arr1Rotate(int *arr1, int arrSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
    {
        arraypostn(arr1, arrSize);
    }
    return;
}

int main()
{
    int arr1[] = {0,3,6,9,12,14,18,20,22,25,27};
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    int i;
    printf("The given array is :  ");
    for(i = 0; i < ctr; i++)

    {
    printf("%d  ", arr1[i]);
    }

    printf("\n");
    printf("\n\nAter 4th position the values of the array are :  ");
    for(i = 4; i < ctr; i++)

    {
    printf("%d  ", arr1[i]);
    }

    printf("\n");
    printf("\n\nBefore 4th position the values of the array are :  ");
    for(i = 0; i < 4; i++)

    {
    printf("%d  ", arr1[i]);
    }

    printf("\n");
    arr1Rotate(arr1, ctr, 4);
     printf("\n\n\nAfter rotating from 4th position the array is: \n\n\n");
    for(i = 0; i<ctr; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
