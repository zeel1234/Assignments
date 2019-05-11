#include<stdio.h>
void sort(int[]);
void main()
{
    int i,arr[5];
    printf("Enter Element : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr);
}
void sort(int arr[5])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Sorted Array is : %d\n",arr[i]);
    }

}
