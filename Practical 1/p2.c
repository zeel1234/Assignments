#include <stdio.h>
#define SIZE 5

int main()
{
   int arr[SIZE], i,*ptr,sz;
   printf("Enter elements: ");

   for(i = 0; i < SIZE;i++)
     scanf("%d",&arr[i]);

    ptr=arr;
    sz=sizeof(arr)/sizeof(arr[0]);
    printf(" size : %d\n",sz);

    printf("You entered: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf(" arr[%d] = %d\n", i,*ptr);
        ptr++;
    }
    return 0;
}
