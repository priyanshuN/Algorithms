#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,j,x=0,z=0,n,y=0;
    int a[105][10];
    cin>>n;
    for(i=0;i<n;++i)
    {
        for(j=0;j<3;++j)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;++i)
    {
        x+=a[i][0];
        y+=a[i][1];
        z+=a[i][2];
    }
    if(x==0&&y==0&&z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
