#include<stdio.h>
#include<stdlib.h>

int find_element(int*,int,int);
int main()
{
    int size,num,index;
    printf("ENter the number of elements:--->");
    scanf("%d",&size);
    index = size-1;

    int *arr = (int*)malloc(size*sizeof(int));
    printf("ENter the elements:--->");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
    printf("Enter the element that you are searching for :--->");
    scanf("%d",&num);

    if(find_element(arr,index,num) == -1)
        printf("Element not found\n");
    else 
        printf("%d is the index of the %d \n",find_element(arr,index,num),num);
    free(arr);
    return 0;
}

int find_element(int *arr, int index, int num)
{
    if(index==-1)
        return -1;
    else if(arr[index]==num)
        return(index);
    else 
        find_element(arr,index-1,num);
}