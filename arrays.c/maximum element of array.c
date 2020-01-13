#include <stdio.h>


int main(){
    int array[100],max,size,i=1;

    printf("Enter the number of elements in array\n");
    scanf("%d",&size);

    printf("Enter %d integers\n",size);

    for(i=0;i<size;i++)
    scanf("%d",&array[i]);

    max=array[0];

    for(i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];

        }
    }
    printf("maximum element is  %d \t.\n",max,max);

    return 0;
}
