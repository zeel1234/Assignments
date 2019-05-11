#include<stdio.h>
#include<stdio.h>
void passbyref(int*,int*);
void passbyvalue(int a,int b);
void main()
{
    int a,b;
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Enter Number : ");
    scanf("%d",&b);
    passbyref(&a,&b);
    passbyvalue(a,b);
    getch();
}
void passbyref(int *a,int *b)
{
    printf("Before swap A:%d B:%d\n",*a,*b);
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swap A: %d B: %d\n",*a,*b);
}
void passbyvalue(int a,int b)
{
    int temp;
    printf("Before swap A:%d B:%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap A: %d B: %d\n",a,b);
}
