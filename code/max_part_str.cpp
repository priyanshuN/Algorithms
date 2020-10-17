#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int>m,t;
    for(int i=0;i<n;++i){
        m[s[i]]++;
        t[s[i]]++;
    }
    vector<int>v;
    v.push_back(-1);
    for(int i=0;i<n;++i){
        t[s[i]]--;
        if(t[s[i]]==0){
            int k;
            for(k=0;k<26;++k){
                if(t['a'+k]!=0 && t['a'+k]!=m['a'+k]){
                    break;
                }
            }
            if(k==26){
                v.push_back(i);
            }
        }
    }
    for(int i=1;i<v.size();++i){
        cout<<s.substr(v[i-1]+1,v[i]-v[i-1]);
        cout<<v[i]<<' '<<endl;
    }
    return 0;
}