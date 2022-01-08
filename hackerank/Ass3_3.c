#include<stdio.h>
int main()
{
    int n,z,i,carry;
    printf("how many no to taken :");
    scanf("%d",&n);
    int a[n+1];
    printf("enter n numbers :");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    z=a[0];
    for(i=1;i<n;++i)
    {
        while(a[i]!=0)
        {
            carry=z&a[i];
            z=z^a[i];
            a[i]=carry<<1;
        }

    }
    printf("%d",z);
    return 0;
}
