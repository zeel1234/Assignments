#include<stdio.h>
void sum(int[3][3]);
void main()
{
    int i=0,j=0,arr[3][3];//suppose arr[5][5] if i change the size of array here it give me garbage value why?....
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    sum(arr);
}
void sum(int arr[3][3])
{
    int i,j,ans=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ans=ans+arr[i][j];
        }
    }
    printf("Sum of Two Dimentional Array : %d",ans);
}
