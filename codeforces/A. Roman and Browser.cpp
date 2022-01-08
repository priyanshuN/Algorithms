#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x=0,y=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]==1)
            x++;
        else
            y++;
    }
    int temp=0;
    for(int i=0;i<k;++i){
            int t=0,r=0;
        for(int j=i;j<n;j+=k){
            if(a[j]==1)
                t++;
            else
                r++;
        }
        if(temp<(abs((x-t)-(y-r))))
            temp=abs((x-t)-(y-r));
    }
    cout<<temp;
    return 0;
}
