#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int a[27];
    for(int i=0;i<26;++i){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<26;++i){
        if(temp<a[i]){
          temp=a[i];
        }
    }
    long long int z=0;
    for(int i=0;i<s.size();++i){
        z+=(i+1)*a[s[i]-97];
    }
    for(int i=1;i<=k;++i){
        z+=(i+s.size())*temp;
    }
    cout<<z;
    return 0;
}
