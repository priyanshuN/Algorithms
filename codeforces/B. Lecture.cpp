#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>>s;
    for(int i=0;i<m;++i){
        string s1,s2;
        cin>>s1>>s2;
        s.push_back(make_pair(s1,s2));
    }
    vector<string>str;
    for(int i=0;i<n;++i){
        string s3;
        cin>>s3;
        str.push_back(s3);
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(str[i]==s[j].first||str[i]==s[j].second){
                if((s[j].first).size()<=(s[j].second).size()){
                    cout<<s[j].first<<' ';
                }
                else{
                    cout<<s[j].second<<' ';
                }
                break;
            }
        }
    }
    return 0;
}
