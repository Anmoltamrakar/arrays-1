#include <stdio.h>

int main()
{
    int i,n,sum=0;
    int array[100];

    printf("Enter number of elements of array:\n");
    scanf("%d",&n);


    printf("enter %d number of elements that you want to add \n",n);
      for(i=0;i<n;i++)

      {
          printf("num%d=  ",i);
          scanf("%d",&array[i]);
          sum=sum + array[i];
      }

    printf("The sum of input number is = %d \n",sum);
    return 0;
}
