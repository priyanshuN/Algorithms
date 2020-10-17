#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int>m;
    int k;
    cin>>k;
    int i=0,j=0,ans=0;
    while(i<=j && j<n){
        m[s[j]]++;
        if(j-i+1==k){
            int z=0,k;
            for(k=0;k<26;++k){
                if(m['a'+k]>1){
                    break;
                }
            }
            if(k==26){
                cout<<i<<' '<<j<<endl;
                ans++;
                m[s[i]]--;
                i++;
            }
            else{
                while(i<=j){
                    m[s[i]]--;
                    i++;
                    for(k=0;k<26;++k){
                        if(m['a'+k]>1){
                            break;
                        }
                    }
                    if(k==26){
                        break;
                    }
                }
            }
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;
}