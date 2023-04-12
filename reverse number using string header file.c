//WAP to reverse number using string header file
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    printf("enter string:");
    gets(a);
    strrev(a);
    printf("reverse string:%s",strrev(a));
}


