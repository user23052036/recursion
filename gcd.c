// lcm(a,b)*hcf(a,b) = |a.b|
//this can be used to find the lcm and hcf

#include<stdio.h>

int MIN(int,int);
int GCD_num(int,int);
int main()
{
    int num1,num2,gcd;
    printf("Enter your two number to find GCD:--->");
    scanf("%d%d",&num1,&num2);
    
    gcd = GCD_num(num1,num2);
    
    if(gcd == -1)
        printf("INVALID INPUT");
    else
        printf("GCD IS :---> %d",gcd);
    return 0;
}

int GCD_num(int num1, int num2)
{
    int i,min,GCD;
    min = MIN(num1,num2); 

    if(num1 ==1 || num2 ==1)
        return num1*num2;
        
    if(num1==0 || num2==0)
        return 0;
        
    if(num1<0 || num2<0)
        return -1;
    
    for(i=2; i<=min; i++)
        if(num1%i==0 && num2%i==0)
        {
            GCD = GCD_num(num1/i,num2/i);     //sub_answer
            break;
        }
    
    if(i>min)                                 //base case
        return 1;
    return (GCD*i);                          //original_answer
}

int MIN(int num1, int num2)
{
    if(num1>=num2)
        return num2;
    else
        return num1;
}