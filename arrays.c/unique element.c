#include <stdio.h>

int main()
{

    int i,n,j;
    int array[100];

    printf("Enter the number of elements of array\n");
    scanf("%d",&n);

    printf("Enter the elements of array \n");

    for(i=0;i<n;i++)
    {

        scanf("%d",&array[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(array[i]==array[j])
            break;
        }
        if(i==j)
        {
            printf("%d\t",array[i]);

        }
    }
    printf("\n");
    return 0;
}
