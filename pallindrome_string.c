#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool cheak_pallindrome(char*,char*);
int main()
{
    bool value;
    printf("Enter your string:--->");
    char *str = (char*)malloc(10*sizeof(char));
    scanf("%s",str);
    value = cheak_pallindrome(str,&str[strlen(str)-1]);

    if(value == true)
        printf("pallindrome string");
    else
        printf("Not pallindrome string\n");

    free(str);
    return 0;
}

bool cheak_pallindrome(char *l, char *r)
{
    if(l>r) return true;
    if(*l != *r) return false; 
    cheak_pallindrome(l+1,r-1);
}