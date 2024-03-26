#include<stdio.h>
#include<stdlib.h>

int largest_num(int*,int);
int smallest_num(int*,int);
int sum_arr(int*,int);
int main()
{
    int size,num,index;
    float average;
    printf("ENter the number of elements:--->");
    scanf("%d",&size);
    index = size-1;

    int *arr = (int*)malloc(size*sizeof(int));
    printf("ENter the elements:--->");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("largest number in the array is %d\n",largest_num(arr,index));
    printf("smallest number in the array is %d\n",smallest_num(arr,index));
    printf("Sum of elements in array:--->%d\n",sum_arr(arr,index));
    printf("Average of elements in array:--->%d\n\n",sum_arr(arr,index)/size);
    free(arr);
    return 0;  
}

int largest_num(int *arr, int index)
{
    if(index==0)
        return(arr[index]);

    int large = largest_num(arr,index-1);
    if(large > arr[index])
        return(large);
    else
        return(arr[index]);
}

int smallest_num(int *arr, int index)
{
    if(index==0)
        return(arr[index]);

    int small = smallest_num(arr,index-1);
    if(small < arr[index])
        return(small);
    else
        return(arr[index]);
}

int sum_arr(int *arr, int index)
{
    int sum=0;
    if(index==0)
        return(arr[index]);

    sum = sum + sum_arr(arr,index-1);
    return(arr[index] + sum);
}