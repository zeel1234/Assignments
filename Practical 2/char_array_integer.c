#include<stdio.h>
#include<stdlib.h>
void con(char *array)
{
    int num=0,i;

    for(i=0;i<array[i]!='\0';i++)
    {
        num=num*10+array[i]-'0';
    }

    if(num & 1 == 1)
        printf("Is odd!");
    else
        printf("Is even");
}
int main()
{
    char *arr;
    arr=(char*)calloc(50,sizeof(char));
    printf("Enter number: ");
    scanf("%s",arr);
    con(arr);

}
