#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        a[i]+=k;
    }
    int z=0;
    for(int i=0;i<n;++i){
        if(a[i]<6){
            z++;
        }
    }
    cout<<z/3;
    return 0;
}
