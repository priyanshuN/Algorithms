#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size()-1,k=len;
    for(int i=0;i<len;++i){
        if((s[i]-'0')%2==0){
            k=i;
            if(s[len]>s[i]){
                break;
            }
        }
    }
    if(k==len)
        cout<<-1;
    else{
        swap(s[len],s[k]);
        cout<<s;
    }

    return 0;
}
