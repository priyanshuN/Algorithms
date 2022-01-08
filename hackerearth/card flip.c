#include<stdio.h>
int main()
{
    long int x,i,a,z;
    scanf("%ld",&x);
    for(i=0;i<x;++i)
    {
        scanf("%ld",&a);
        z=a/3;
        if(a==1||a==2)
            printf("1\n");
        else if(a%3==0)
            printf("%ld\n",z);
        else
            printf("%ld\n",a);

    }
    return 0;
}
