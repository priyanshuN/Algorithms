#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[100009]={0},f[100009]={0};

    for(int i=0;i<m;++i){
        int x;
        cin>>x;
        //cout<<x<<endl;
        a[x]++;
        //cout<<a[x]<<endl;
        f[a[x]]++;
        //cout<<f[a[x]]<<endl;
        if(f[a[x]]==n){
            cout<<1;
        }
        else
            cout<<0;
    }
    return 0;
}
