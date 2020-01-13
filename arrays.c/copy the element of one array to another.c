#include <stdio.h>

int main()
{ int i,n;
    int array[100],array2[100];

    printf("Enter number of elements of array:\n");
    scanf("%d",&n);


    printf("Input %d number of elements \n",n);
      for(i=0;i<n;i++)

      {
          printf("num%d=  ",i);
          scanf("%d",&array[i]);
      }
for(i=0;i<n;i++)  //to copy 1st array elementto second//
{

   array2[i]=array[i];

   }

printf("The elements store in 1st array is \n");
for(i=0;i<n;i++){


    printf("%4d\n",array[i]);
}

printf("The elements store in 2nd array is \n");
for(i=0;i<n;i++){


    printf("%4d\n",array2[i]);

}
    return 0;
}
