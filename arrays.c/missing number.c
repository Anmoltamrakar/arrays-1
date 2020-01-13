#include <stdio.h>

int missingnum(int *array, int array_size)
{
    int i, sum = 0, n = array_size + 1;
    for(i = 0; i < array_size; i++)
    {
        sum = sum + array[i];
    }

    return (n*(n+1))/2 - sum;
}

int main()
{
    int i;
    int array[] = {1, 3, 4, 2, 5, 6, 9, 8};

    int ctr = sizeof(array)/sizeof(array[0]);
    printf("The given array is :  ");

    for(i = 0; i < ctr; i++)
    {
    printf("%d  ", array[i]);
    }
    printf("\n");

 printf("The missing number is : %d \n", missingnum(array, ctr));
 return 0;

}
