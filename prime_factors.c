#include <stdio.h>

int prime_factor(int);
int main() 
{
    int num;
    printf("Enter your number:--->");
    scanf("%d",&num);
    
    printf("prime factors of %d is :---> ",num);
    prime_factor(num);
    return 0;
}

int prime_factor(int num)
{
    int i,prime;
    
    if(i==num)
    {
        printf("%d 1",i);
        return 1;
    }

    for(i=2; i<num; i++)
        if(num%i==0)
        {
            printf("%d ",i);
            prime = prime_factor(num/i);
            break;
        }
    return (num*i);
}