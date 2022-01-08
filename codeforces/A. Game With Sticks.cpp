#include<iostream>
using namespace std;
int main()
{
    int m,n,z;
    cin>>n>>m;
    z=m+n;
    if(m%2==0&&n%2==0)
        cout<<"Malvika";
    else if(m%2!=0&&n%2!=0)
        cout<<"Akshat";
    while(z>0)
    {
        if(z==3)
        {
            cout<<"Akshat";
        }
        if(z==5)
            cout<<"Malvika";
        z=z-4;
    }
    return 0;
}
