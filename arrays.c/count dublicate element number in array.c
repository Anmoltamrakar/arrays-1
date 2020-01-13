#include <stdio.h>

int main()
{
   int i,j,n,count=0;
   int array[100];

   printf("Enter the size of array \n");
   scanf("%d",&n);

   printf("Enter the %d elements of array\n",n);

   for(i=0;i<n;i++)
   {
   scanf("%d\n",&array[i]);

   }
       for(i=0;i<n;i++)
       {
       for(j=i+1;j<n;j++)
       {

           if(array[i]==array[j] )
           {
               count+=1;
               break;
           }
       }


       }
   printf("the total nuber of duplicate number of elements is%d",count);
           return 0;
}
