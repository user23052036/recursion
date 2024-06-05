#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
int stack[MAXSIZE];
int top=-1;

void push(int);
void pop();
void display();
void combination(int,int*,int,int);
void bubble_sort(int*,int);
int main()
{
    int n,*arr,target;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));         
    printf("Enter the elements:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);   

    bubble_sort(arr,n);
    printf("ENter the target element:--->");
    scanf("%d",&target);

    printf("Following are the combination possible:--->");
    combination(0,arr,target,n-1);                  
    free(arr);
    return 0;
}

void combination(int index, int *arr, int target, int n)
{
    if(index>n)
    {
        if(target==0)
        {
            printf("{");
            display();
            printf("}");
        }
        return;
    }
    push(arr[index]);
    if(target>=arr[index])
        combination(index,arr,target-arr[index],n);
    pop();
    combination(index+1,arr,target,n);
}


void bubble_sort(int *arr, int n)
{
    for(int round=1; round<n; round++)
    {
        int flag=0;
        for(int i=0; i<n-round; i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag=1;
                arr[i]=arr[i]+arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
            }
        }
        if(flag==0)
            break;
    }
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