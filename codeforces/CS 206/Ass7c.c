#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int M=99999;
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    char a[M],b[M];
    printf("Enter the string s1 :");
    scanf("%s",&a);
    printf("Enter the string s2 :");
    scanf("%s",&b);
    int n=strlen(a);
    int m=strlen(b);
    //printf("%d %d\n",n,m);
    int c[n+1][m+1];
    int i,j;
    for(i=0;i<n+1;++i)
        c[i][0]=i*2;
    for(i=0;i<m+1;++i)
        c[0][i]=i;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            if(a[i-1]==b[j-1])
                c[i][j]=c[i-1][j-1];
            else
            {
                //c[i][j]=1+min(c[i-1][j-1],min(c[i][j-1],1+c[i-1][j]));
                if(c[i-1][j-1]<c[i][j-1])
                {
                    if(c[i-1][j-1]<1+c[i-1][j])
                    {
                        c[i][j]=1+c[i-1][j-1];
                    }
                    else{
                        c[i][j]=2+c[i-1][j];
                    }
                }
                else
                {
                    if(c[i][j-1]<1+c[i-1][j])
                    {
                        c[i][j]=1+c[i][j-1];
                    }
                    else
                    {
                        c[i][j]=2+c[i-1][j];
                    }
                }
            }
        }
    }
    char d[c[n][m]+1];
    int y=0;
    /*for(i=0;i<=n;++i)
    {
        for(j=0;j<=m;++j)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }*/
    int z=0,k=0,x=0;
    i=n;j=m;
    while(i>=0&&j>=0)
    {
        if(j==0&&i==0)
            break;
        else if(j==0)
        {
            x++;
            i--;
            d[y++]='D';
        }
        else if(i==0)
        {
            k++;
            j--;
            d[y++]='I';
        }
        else if(a[i-1]!=b[j-1])
        {
            if(c[i-1][j-1]<c[i][j-1])
            {
                if(c[i-1][j-1]<1+c[i-1][j])
                {
                    i--;j--;
                    z++;
                    d[y++]='R';
                }
                else{
                    i--;x++;
                    d[y++]='D';
                }
            }
            else
            {
                if(c[i][j-1]<1+c[i-1][j])
                {
                    j--;
                    k++;
                    d[y++]='I';
                }
                else{
                    i--;x++;
                    d[y++]='D';
                }
            }
        }
        else if(a[i-1]==b[j-1])
        {
            i--;j--;
        }
    }
    int h=x+z+k;
    printf("\nTotal cost required is : %d\n",c[n][m]);
    printf("Total no of operations of insertion are : %d\n",k);
    printf("Total no of operations of replacement are : %d\n",z);
    printf("Total no of operations of deletion are : %d\n",x);
    printf("\nFollowing operations are performed on string s1 sequentially :\n");
    printf("D-remove I-insert R-replace\n");
    for(i=0;i<h;++i)
    {
        printf("%c ",d[i]);
    }
    printf("\n");
    return 0;
}
