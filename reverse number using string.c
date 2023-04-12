//read n number in an array put them into reverse order
#include<stdio.h>
int main()
{
int num[100],i,n;
printf("enter the number of array element=");
scanf("%d",&n);
for(i=0;i<n;i++)
{

    printf("number=");
    scanf("%d",num[i]);
}
for(i=n-1;i>=0;i--)
{
printf("\n reverse number=%d",num[i]);
}
return 0;
}
