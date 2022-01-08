#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,j,n,z=0,temp;
    char a[100],b[100];
    gets(a);
    i=0;j=0;
    while(1)
    {
        if(a[i]!=' ')
        {
            b[j]=a[i];
            j++;
        }
        if(a[i]=='}')
        {
           b[j]='\0' ;
           break;
        }
        i++;
    }
    n=strlen(b);
    for(j=1;j<n;j=j+2)
    {
        temp=b[j];
        for(i=j+2;i<n;i=i+2)
        {
            if(temp==b[i])
            {
                b[i]=',';
            }
        }
    }
    for(i=1;i<n;i=i+2)
    {
        if(b[i]>=97&&b[i]<=123)
            z+=1;

    }
    cout<<z;
}
