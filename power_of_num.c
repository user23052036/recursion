#include<stdio.h>

int pow_num(int,int);
int main()
{
    int x,n;
    printf("ENter the value of x and n like (x^n):--->");
    scanf("%d%d",&x,&n);
    
    printf("\n(%d^%d) = %d",x,n,pow_num(x,n));
    return 0;
}

int pow_num(int x, int n)
{
    if(n==0 || x==1)
        return 1;
    
    int value = pow_num(x,n-1);
    return (x*value);
}