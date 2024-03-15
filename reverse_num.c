#include<stdio.h>

int num_reverse(int,int);
int main()
{
    int num,power=1;
    printf("Enter your number:--->");
    scanf("%d",&num);

    for(power; num/power!=0; power*=10){}
    printf("reverse of %d is ---> %d",num,num_reverse(num,power/10));
    return 0;
}

int num_reverse(int num, int power)
{
    if(num==0)
        return 0;
    
    int reverse = num_reverse(num/10,power/10);
    return (reverse + (num%10)*power);
}

