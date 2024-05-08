#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXSIZE 20
int stack[MAXSIZE];
int top=-1;

bool subsequence_print(int,int*,int,int,int);
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

    printf("following are the subsequences:---> ");
    subsequence_print(0,arr,n-1,sum,0);                  
    free(arr);
    return 0;
}

bool subsequence_print(int index, int *arr, int size, int sum, int stack_sum)
{
    if(index>size)
    {
        if(stack_sum==sum)
        {
            printf("{");
            display();
            printf("} ");
            return true;
        }
        else return false;
    }
    push(arr[index]);
    stack_sum+=arr[index];
    if(subsequence_print(index+1,arr,size,sum,stack_sum) == true) return true;
    pop();
    stack_sum-=arr[index];
    if(subsequence_print(index+1,arr,size,sum,stack_sum) == true) return true;
    //last step me waise bhi recursive function automatically return hota he 
    return false;    //but as it is bool type not void you must return
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