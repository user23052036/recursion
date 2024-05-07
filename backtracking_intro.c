// Online C compiler to run C program online
#include <stdio.h>
int i=1;
void print_num1(int);
void print_num2(int);
int main() 
{
    int limit;
    printf("Enter your limit:--->");
    scanf("%d",&limit);
    print_num2(limit);
    return 0;
}

void print_num1(int num) /// no backtracking
{
    if(i<=num)
        printf("%d\t",i++);
    else return;
    print_num2(num);
}

void print_num2(int num) // backtracking
{
    if(num==0) return;
    print_num2(num-1);
    printf("%d\t",num);
}