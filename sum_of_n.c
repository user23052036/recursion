#include<stdio.h>

int num_sum(int);
int main()
{
    int num;
    
    printf("Enter the number:--->");
    scanf("%d",&num);
    
    printf("Sum of %d natural numbers is:---> %d",num,num_sum(num));
    return 0;
}

int num_sum(int num)
{
    if(num == 1)                // base condition 1
        return 1;
    if(num == 0)                // base condition 2
        return 0;
    
    int sum = num_sum(num-1);  // sub problems
    return (sum+num);          // main problem
}