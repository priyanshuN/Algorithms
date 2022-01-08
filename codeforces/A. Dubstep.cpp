#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,n,j,k;
    char a[205],b[205];
    cin>>a;
    n=strlen(a);
    j=0;
    i=0;
    while(i<n)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            if(b[j-1]!=' ')
            {
              b[j]=' ';
              j++;
            }
            i+=3;
        }
        else
        {
            b[j]=a[i];
            j++;
            i++;
        }
    }
    b[j]='\0';
    cout<<b;
    return 0;
}
