#include<stdio.h>
#define SIZE 100
void cal(int arr[],int n,int x);
void main()
{
    int i,n,x,arr[SIZE];
    printf("Enter the Order of Polynomial : ");
    scanf("%d",&n);
    printf("Enter Value of X : ");
    scanf("%d",&x);
    printf("Enter Equation : ");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    cal(arr,n,x);
}
void cal(int arr[],int n,int x)
{
    int i,sum,power;
    sum=arr[0];
    for(i=1;i<=n;i++)
    {
        sum=sum*x+arr[i];
    }
    printf("sum of Equation : %d \n",sum);
    power=n;
    for(i=0;i<=n;i++)
    {
        printf("%d^%d",arr[i],power--);
        if(power < 0)
        {
            break;
        }
        else if(arr[i] > 0)
            printf(" + ");
        else if(arr[i] < 0)
            printf(" - ");
        else
            printf(" ");
    }
}


