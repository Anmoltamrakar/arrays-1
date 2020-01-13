
#include <stdio.h>
#include <limits.h>
int main() {
    int array[100];
    int i,n,first,second;

    printf("Enter number of elements of array:\n");
    scanf("%d",&n);


    printf("Input %d number of elements \n",n);
      for(i=0;i<n;i++)

      {
          printf("num-%d=  ",i);
          scanf("%d",&array[i]);
      }

      printf("the value stored in aray are\n");

      for (i=0;i<n;i++)
      {
        printf("%5d\n",array[i]);

      }


      first = second= INT_MIN;
    for(i=0;i<n;i++)
    {
        if(array[i]>first)
        {
            second=first;
            first=array[i];
        }
        else
        if(array[i]>second&& array[i]<first)
        {
            second=array[i];
        }
    }
    printf("\nfirst largest number is=%d\n",first);
    printf("\nsecond largest number is=%d\n",second);

        return 0;
    }
