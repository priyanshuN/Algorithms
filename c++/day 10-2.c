#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n,z,i,x,b;
    char   a[1000000];
    scanf("%d",&n);
    z=n;
    for(i=0;;i=i+1)
    {
        x=z%2;
        z=z/2;
        a[i]=x;
       // printf("%d\n",z);
        //printf("%d\n",x);
         //printf("%d\n",a[i]);
        if(z==0)//||z==1)
        {
            b=i;
            break;

        }


    }
   // printf("%d",a);

    //b=strlen(a)/sizeof(int);
    //a[b+1]=1;
   // printf("%d",b);
    for(i=b;i>=0;--i)
        printf("%d",a[i]);
    return 0;
}


