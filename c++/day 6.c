#include<stdio.h>
int main()
{
    int x,i,j,n;
    char a[10000];
    scanf("%d",&x);
    for(j=0;j<x;j++)
    {
        scanf("%s",&a);
        n=strlen(a);

        for(i=0;i<=n-1;i=i+2)
        {
            printf("%c",a[i]);
        }
        printf(" ");
         for(i=1;i<=n-1;i=i+2)
        {
            printf("%c",a[i]);

        }
      printf("\n");

    }
    return 0;
}
