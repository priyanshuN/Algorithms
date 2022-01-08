#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,z=0;
    cin>>n>>v;
    int b[n];
    for(int i=0;i<n;++i){
        int p,x=0;
        cin>>p;
        int a[p];
        for(int j=0;j<p;++j){
            cin>>a[j];
            if(v>a[j]){
                x=1;
            }
        }
        if(x==1){
            b[z++]=i+1;
        }
    }
    cout<<z<<endl;
    for(int i=0;i<z;++i)
        cout<<b[i]<<' ';
    return 0;
}
