#include<stdio.h>
#include<stdlib.h>

void rev_array(int*,int*);
void rev_array(int *l, int *r)
{
    if(l>=r) return;
    
    *l = *l + *r;
    *r = *l - *r;
    *l = *l - *r;
    
    rev_array(l+1,r-1);
}

int main()
{
    int limit;
    printf("Enter the size of array:--->");
    scanf("%d",&limit);
    
    int *arr = (int*)malloc(limit*sizeof(int));
    for(int i=0; i<limit; i++)
        scanf("%d",&arr[i]);
        
    rev_array(&arr[0],&arr[limit-1]);
    
    printf("After reversing the array we get:--->\n");
    for(int i=0; i<limit; i++)
        printf("%d\t",arr[i]);
    free(arr);
    return 0;
}