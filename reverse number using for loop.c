//armstrong number using udf.
#include<stdio.h>
#include<math.h>
int arm(int);
void main()
{
    int n,ans,f=0;
    printf("enter any number to check  it is armstrong or not:");
    scanf("%d",&n);
    ans=arm(n);
    if(f==1)
    {
        printf("%d number is armstrong",n);
    }
    else
    {
        printf(" %d enter number is not armstrong",n);
    }
}
int arm(int x)
{
    int ans,i,sum=0,f;
    for(i=0;i<x;i++)
    {
        sum=sum+pow(i,3);
    }
    if(sum==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
