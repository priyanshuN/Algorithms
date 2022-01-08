#include<stdio.h>
int main()
{
    int z,x,i,j;
    z=0;
    char a[1000],b[1000],c[1000],d[1000];
    scanf("%s %s %s",&a,&b,&c);
    printf("Name : %s %s\n",b,a);
    printf("ID : %s\n",c);
    scanf("%d",&x);
    for (i=0;i<x;++i)
    {
        scanf("%d",&d[i]);
        z=z+d[i];
    }
    printf("%d",z/x);
    return 0;
}
