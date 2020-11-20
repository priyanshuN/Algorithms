#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(auto c:s){
        m[c]=-1;
    }
    int i=0,j=0,ans=0,cnt=0;
    for(auto c:s){
        i=max(i,m[c]+1);
        m[c]=j;
        ans=max(ans,j-i+1);
        cnt+=ans;
        j++;
        cout<<ans<<' ';
    }
    cout<<endl;
    cout<<ans<<endl<<cnt<<endl;;
    return 0;
}