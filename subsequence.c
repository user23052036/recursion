#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
int stack[MAXSIZE];
int top=-1;

void subsequence_print(int,int*,int);
void push(int);
void pop();
void display();
int main()
{
    int n,*arr;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));         
    printf("Enter the elements:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);   

    subsequence_print(0,arr,n-1);                  
    free(arr);
    return 0;
}

void subsequence_print(int index, int *arr, int size)
{
    if(index>=size)
    {
        printf("{");
        display();
        printf("} ");
        return;
    }
    push(arr[index]);
    subsequence_print(index+1,arr,size);
    pop();
    subsequence_print(index+1,arr,size);
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