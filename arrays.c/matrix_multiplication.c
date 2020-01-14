#include<stdio.h>



int main()
{
    int matrix1[3][3], matrix2[3][3], matrix3[3][3], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &matrix1[i][j]);
    }
    printf("Enter second 3*3 matrix element: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &matrix2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + matrix1[i][k] * matrix2[k][j];
            matrix3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", matrix3[i][j]);
        printf("\n");
    }

    return 0;
}





