#include<stdio.h>
int main()
{
    int i,j,z,temp;

    char a[1000][1000];
    for(i=0;i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            scanf("%d",&a[i][j]);
        }

    }
     for(i=0;i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            z=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(i==0&&j==0)
                temp=z;
            if(temp<z)
                temp=z;
        }
    }
    printf("%d",temp);
    return 0;
}
