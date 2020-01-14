#include <stdio.h>
#define MAX_ROW 3
#define MAX_COL 3

int main()
{
    int A[MAX_ROW][MAX_COL];
    int B[MAX_COL][MAX_ROW];

    int row, col;


    printf("Enter matrix of size %dx%d: \n\n", MAX_ROW, MAX_COL);
    for(row=0; row<MAX_ROW; row++)
    {
        for(col=0; col<MAX_COL; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row=0; row<MAX_ROW; row++)
    {
        for(col=0; col<MAX_COL; col++)
        {

            B[col][row] = A[row][col];
        }
    }

    printf("\nOriginal matrix: \n");
    for(row=0; row<MAX_ROW; row++)
    {
        for(col=0; col<MAX_COL; col++)
        {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }

    printf("Transpose of matrix A: \n");
    for(row=0; row<MAX_COL; row++)
    {
        for(col=0; col<MAX_ROW; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

    return 0;
}

