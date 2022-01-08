#include<stdio.h>
#include<stdlib.h>
int sum1(int a[],int n,int b)
{
    return 0;
}
int min(int a[],int n, int k)
{
   if (k==0)
    return 0;
   int sum=9999999;
   int i;
   for(i=0;i<n;i++)
   {
     if (a[i]<=k)
     {
         int s=min(a,n,k-a[i]);
         if (s+1<sum)
         {
            sum=s+1;
         }
     }
   }
   return sum;
}
int main()
{
    int n,z=0,b,k,i;
    printf("Enter the no of denominations :");
    scanf("%d",&n);
    printf("Enter the denominations : ");
    int a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        z+=a[i];
    }
    printf("Enter the money to be exchanged :");
    scanf("%d",&b);
    k=min(a,n,b);
    if(k==9999999)
        printf("Money can't be exchanged");
    else
        printf("Minimum no of coins required are : %d",k);
    return 0;
}
