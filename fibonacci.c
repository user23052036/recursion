#include<stdio.h>

int fibo(int);
int main()
{
    int num;
    
    printf("Enter the number:--->");
    scanf("%d",&num);
    
    printf("\nfollowing are the fibonnacci numbers:--->");
    for(int i=1; i<=num; i++)
        printf("%d ",fibo(i));
    return 0;
}

int fibo(int num)
{
    if(num == 1 || num == 2)
        return 1;
        
    int fibonacci = fibo(num-2) +fibo(num-1);
    return fibonacci;
}