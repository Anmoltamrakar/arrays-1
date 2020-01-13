#include <stdio.h>


int main() {
    int i,j,k;
    int number[6]={2,-1,3,23,8,6};

    int odd[6];
    int even[6];
    j=0;
    k=0;

    for(i=0;i<6;i++)
    {
        if(number[i]%2==0)
        {
            even[j]=number[i];
            j++;



        }
        else
        {
            odd[k]=number[i];
            k++;
        }
    }
    printf("\neven number:");
    for(i=0;i<j;i++)
    {

    printf("%d\n",even[i]);
}
printf("\nodd number:");
for(i=0;i<k;i++)
{
    printf("%d\n",odd[i]);

}
printf("\n");

    return 0;
}
