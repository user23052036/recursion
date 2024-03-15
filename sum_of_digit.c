//original problem: sum of digits
//LEAPP OF FAITH    :)

#include<stdio.h>
#include<math.h>

int sum_num(int);
int main()
{
    int num;
    printf("Enter your number:--->");
    scanf("%d",&num);
    
    printf("sum of digits of %d is ---> %d",num,sum_num(num));
    return 0;
}

int sum_num(int num)               // lets assume this solves the sum of digits of (num)
{
    if(num==0)                     //base case
        return 0;
        
    int sum = sum_num(num/10);    // breaking the problem into simpler problems
    return (sum + num%10);        // returning the original problem to the main function
}