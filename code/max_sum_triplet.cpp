#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int f=INT_MIN,s=INT_MIN;
    int c=INT_MIN;
    for(int i=1;i<n;++i){
        if(a[i]>f){
            c=s;
            s=f;
            f=a[i];
        }
        else if(a[i]>s){
            c=f;
            s=a[i];
        }
        else if(a[i]>c){
            c=a[i];
        }
    }
    cout<<f+s+c<<endl;
    return 0;
}