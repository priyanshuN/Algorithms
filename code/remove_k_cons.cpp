#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n,k;
    cin>>k;
    n=s.size();
    stack<pair<char,int>>st;
    for(int i=0;i<n;++i){
        if(st.empty() || st.top().first!=s[i]){
            st.push({s[i],1});
        }
        else if(st.top().first==s[i]){
            int z=st.top().second+1;
            if(z<k){
                st.push({s[i],z});
            }
            else{
                while(!st.empty() && st.top().first==s[i]){
                    st.pop();
                }
            }
        }
    }
    string str="";
    while(!st.empty()){
        str=st.top().first+str;
        st.pop();
    }
    cout<<str<<endl;
    return 0;
}