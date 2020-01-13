#include <stdio.h>


int main() {
int array[3][3],i,j;

    printf("Enter the 9 elements of array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("The elements of the array are:\n");
    for(i=0;i<3;i++)
    {   printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
    }
    printf("\n");

    return 0;
}
