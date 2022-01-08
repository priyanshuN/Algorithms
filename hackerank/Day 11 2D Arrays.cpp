#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,z,temp;
    int a[10][10];
    for(i=0;i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            cin>>a[i][j];
        }

    }
    temp=-90;
     for(i=0;i<4;++i)
    {
        for(j=0;j<4;++j)
        {
            z=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(temp<z)
                temp=z;
        }
    }
    cout<<temp;
    return 0;
}

