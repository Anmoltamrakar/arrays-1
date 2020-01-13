#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a   = *b;
    *b   = tmp;
}

int sepratenum (int arr1[], int arr_size)
{
    int j = 0, i;
    for(i = 0; i < arr_size; i++)
    {
       if (arr1[i] <= 0)
       {
           swap(&arr1[i], &arr1[j]);
           j++;
       }
    }
    return j;
}
int missingnum (int arr1[], int arr_size)
{
  int i;
  for(i = 0; i < arr_size; i++)
  {
    if(abs(arr1[i]) - 1 < arr_size && arr1[abs(arr1[i]) - 1] > 0)
      arr1[abs(arr1[i]) - 1] = -arr1[abs(arr1[i]) - 1];
  }
  for(i = 0; i < arr_size; i++)
    if (arr1[i] > 0)
      return i+1;
  return arr_size+1;
}
int GetSmalPosMisNum (int arr1[], int arr_size)
{
   int shift = sepratenum (arr1, arr_size);
   return missingnum(arr1+shift, arr_size-shift);
}
int main()
{
  int arr1[] = {3, 1, 4, 10, -5, 15, 2, -10, -20};
  int arr_size = sizeof(arr1)/sizeof(arr1[0]);
  int i;
    printf("The given array is :  \t");
    for(i = 0; i < arr_size; i++)
    {
    printf("%d  ", arr1[i]);
    }
    printf("\n");
  int miss_num = GetSmalPosMisNum(arr1, arr_size);
  printf("The smallest positive number missed is:  %d ", miss_num);
  getchar();
  return 0;
}
