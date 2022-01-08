#include<stdio.h>
int main()
{
    int i,j,x,temp,z,n;
    n=0;
    temp=0;
    int a[100000];
    scanf("%d",&x);
    for(i=0;i<x;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x-1;++i)
    {
        z=1;
        for(j=i+1;j<x;++j)
        {
            if(a[i]==a[j])
            {
                z+=1;
            }
        }
        if(temp==z&&n>a[i]);
        {
            n=a[i];
            /*printf("%d\n",n);*/

        }
        if(temp<z)
        {
            temp=z;
            n=a[i];
           /* printf("%d %d\n",temp,n);*/
        }


    }
    printf("%d",n);
    return 0;
}



