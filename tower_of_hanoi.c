#include<stdio.h>

void move(int,char,char,char);
int main()
{
    int n;
    char a='A',b='B',c='C';
    printf("Enter the number of discs:--->");
    scanf("%d",&n);

    move(n,a,b,c);
    return 0;
}

void move(int n, char a, char b, char c)
{
    if(n==1)
        printf("move %d disc from %c to %c\n",n,a,c);
    else
    {
        move(n-1,a,c,b);
        printf("move %d disc from %c to %c\n",n,a,c);
        move(n-1,b,a,c);
    }
}