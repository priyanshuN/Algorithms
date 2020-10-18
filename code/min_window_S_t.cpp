#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    // cin>>s>>t;
    // s="this is a test string";
    // t="tist";
    s="geeksforgeeks";
    t="ork";
    int n=s.size(),m=t.size(),z=0;
    unordered_map<char,int>ma;
    for(int i=0;i<m;++i){
        ma[t[i]]++;
    }
    int i=0,ans=n,lin=0,rin=0;;
    for(int j=0;j<n;++j){
        if(ma.find(s[j])!=ma.end()){
            if(ma[s[j]]>0){
                z++;
            }
            ma[s[j]]--;
        }
        if(z==m){
            while(i<=j){
                if(ma.find(s[i])!=ma.end()){
                    if(ma[s[i]]<0){
                        ma[s[i]]++;
                        // cout<<i<<' ';
                    }
                    else{
                        if(ans>j-i+1){
                            ans=j-i+1;
                            lin=i;
                            rin=j;
                        }
                        break;
                    }
                }
                i++;
            }
        }
    }
    cout<<ans<<endl;
    cout<<s.substr(lin,ans)<<endl;
    return 0;
}