#include<bits/stdc++.h>
using namespace std;

bool find(unordered_set<string>st,string ss){
    if(st.find(ss)!=st.end())return true;
    return false;
}

int main(){
    int len;
    cin>>len;
    unordered_set<string>st;
    for(int i=0;i<len;++i){
        string ss;
        cin>>ss;
        st.insert(ss);
    }
    string s;
    cin>>s;
    int n=s.size();
    vector<bool>dp(n+1,0);
    vector<int>ind;
    ind.push_back(-1);
    for(int i=0;i<n;++i){
        int m=ind.size();
        for(int j=m-1;j>=0;--j){
            string ss=s.substr(ind[j]+1,i-ind[j]);
            if(find(st,ss)){
                dp[j]=true;
                ind.push_back(i);
                break;
            }
        }
    }
    cout<<dp[n-1];
    return 0;
}