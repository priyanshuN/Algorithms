#include<stdio.h>
const int M=99999;
int main()
{
    int n;
    printf("Enter the no of denomination :");
    scanf("%d",&n);
    printf("Enter the type of denomination:\n");
    int a[n+1];
    int i;
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int m;
    printf("Enter the sum: ");
    scanf("%d",&m);
    int b[m+1],j,s[m+1];
    for(i=1;i<m+1;++i)
    {
        b[i]=M;
        s[i]=0;
    }
    b[0]=0;
    int c[m+1];
    s[0]=0;
    for(i=1;i<=m;++i)
    {
        for(j=0;j<n;++j)
        {
            if(a[j]<=i)
            {
                if(b[i-a[j]]!=M&&b[i-a[j]]+1<b[i])
                {
                    b[i]=b[i-a[j]]+1;
                    s[i]=a[j];
                }
            }
        }
    }
    if(b[m]!=M)
    {
        printf("\nMinimum no coins required are : %d\n",b[m]);
        for(i=0;i<=m;++i)
        {
            c[i]=0;
        }
        /*for(i=1;i<=m;++i)
        {
            printf("%d ",s[i]);
        }*/
        int t=m;
        while(t>0)
        {
            c[s[t]]++;
            t=t-s[t];
        }
        //printf("\n");
        printf("Following is the no coins of denomination required :\n");
        for(i=0;i<=m;++i)
        {
            if(c[i]!=0)
            {
                printf("No of coins of denomination %d is : %d\n",i,c[i]);
                //printf("%d %d\n",i,c[i]);
            }
        }
    }
    else
    {
        printf("Coins can't be changed with current denominations\n");
    }
    return 0;
}
