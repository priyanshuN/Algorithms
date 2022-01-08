#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z;
    cin>>n;
    vector<vector<int>>a(n);
    int b[n];
    for(int i=0;i<n;++i)
    {
        z=0;
        for(int j=0;j<4;++j)
        {
            int x;
            cin>>x;
            //a[i].push_back(x);
            z+=x;
        }
        b[i]=z;
        //cout<<b[i]<<' ';
    }
    int c=b[0];
    //sort(b,b+n);
    for(int j=0;j<n-1;++j)
    {
        for(int k=0;k<n-j-1;++k)
        {
            if(b[k]<b[k+1])
            {
                swap(b[k+1],b[k]);
            }
            /*if(b[j]==b[k])
            {
                swap
            }*/
        }
    }
    for(int j=0;j<n;++j)
    {
        if(b[j]==c)
        {
            cout<<j+1;
            break;

        }
        //cout<<b[j]<<' ';
    }
    return 0;
}
