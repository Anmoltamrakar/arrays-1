#include <stdio.h>


int main(){
    int array[100],maximum,minimum,size,i=1;

    printf("enter the number of elements in array\n");
    scanf("%d",&size);

    printf("enter %d integers\n",size);

    for(i=0;i<size;i++)
    scanf("%d",&array[i]);

    maximum=array[0];

    for(i=0;i<size;i++)
    {
        if(array[i]>maximum)
        {
            maximum=array[i];

        }
    }

    minimum=array[0];
    for(i=0;i<size;i++)
    {
        if(array[i]<minimum)
        {
            minimum=array[i];

        }
    }


    printf("maximum element is %d and minimum is %d \t.\n",maximum,minimum);

    return 0;
}
