#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int z=0,k=0,x,y;
    for(int i=0;i<n;++i){
        if(a[i]%2==0){
            z++;
            x=i;
        }
        else{
            k++;
            y=i;
        }
    }
    if(z==1){
        cout<<x+1;
    }
    else{
        cout<<y+1;
    }
    return 0;
}
