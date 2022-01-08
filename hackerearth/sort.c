#include<stdio.h>
int main()
{
     int i,j,x,temp;
    int a[1000];
    scanf("%d",&x);
    for(i=0;i<x;++i)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<x;++j)
    {
        for(i=0;i<x-1;++i)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }
        }
    }
    for(i=0;i<x;++i)
    {
       printf("%d ",a[i]);
    }
    return 0;
}

