#include<stdio.h>

int fact(int);
int main()
{
    int num;
    
    printf("Enter the number:--->");
    scanf("%d",&num);
    
    printf("factorial of %d is :---> %d",num,fact(num));
    return 0;
}

int fact(int num)
{
    if(num == 1)
        return 1;
    if(num == 0)
        return 1;
    
    int factorial = fact(num-1);
    return (factorial*num);
}