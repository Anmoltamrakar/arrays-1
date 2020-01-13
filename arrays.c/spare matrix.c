#include <stdio.h>

int main()
{
   int a[10][10];
   int i,j,r,c,ctr=0;

         printf("Input the number of rows of the matrix : ");
         scanf("%d", &r);
         printf("Input the number of columns of the matrix : ");
         scanf("%d", &c);
         printf("Input elements in the first matrix :\n");
           for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&a[i][j]);
                if (a[i][j]==0)
                {
                    ++ctr;
                }
                }
            }
        if (ctr>((r*c)/2))
        {
            printf ("The given matrix is sparse matrix. \n");
        }
        else
            printf ("The given matrix is not a sparse matrix.\n");

        printf ("Sparsity %d/9\n\n",ctr);
    return 0;
}
