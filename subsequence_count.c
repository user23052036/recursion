#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
int stack[MAXSIZE];
int top=-1;

int subsequence_print(int,int*,int,int,int);
void push(int);
void pop();
void display();
int main()
{
    int n,*arr,sum;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));         
    printf("Enter the elements:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]); 
    printf("Enter the sum that the subsequence mush be add upto:--->");
    scanf("%d",&sum);  

    printf("there are %d subsequences\n",subsequence_print(0,arr,n-1,sum,0));                  
    free(arr);
    return 0;
}

int subsequence_print(int index, int *arr, int size, int sum, int stack_sum)
{
    int left,right;
    if(index>size)
    {
        if(stack_sum==sum)
            return 1;
        return 0;
    }
    push(arr[index]);
    stack_sum+=arr[index];
    left = subsequence_print(index+1,arr,size,sum,stack_sum);   //take condition
    pop();
    stack_sum-=arr[index];
    right = subsequence_print(index+1,arr,size,sum,stack_sum);//not take condition

    return(left+right);
}



void push(int num)
{
    stack[++top]=num;
}

void pop()
{
    top--;
}

void display()
{
    for(int i=0; i<=top; i++)
        printf("%d",stack[i]);
}