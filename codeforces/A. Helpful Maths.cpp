#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[s.size()],j=0;
    for(int i=0;i<s.size();i+=2){
        string s1;
        s1.push_back(s[i]);
        //cout<<s1;
        a[j++]=stoi(s1);
    }
    sort(a,a+j);
    j=0;
    for(int i=0;i<s.size();++i){
      if(i%2==0){
        cout<<a[j++];
      }
      else{
        cout<<"+";
      }
    }

    return 0;
}
