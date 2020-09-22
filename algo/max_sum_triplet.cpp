#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(ll i=a;i<b;i++)

int lv(set<int>&s,unordered_map<int,int>&m,int &x){
    auto it = s.lower_bound(x);
    auto it1=it;
    --it1;
    if(it==s.end() && s.size()>=1 && (*it1)>x)return -1;
    if((*it)==x)return m[(*it)];
    --it;
    return m[(*it)];
}

vector<int>sol(vector<int>&v,int n){
    int suf[n+1],ind[n+1];
    suf[n]=v[n-1];
    ind[n]=n-1;
    for(int i=n-1;i>=0;--i){
        if(v[i]>suf[i+1]){
            suf[i]=v[i];
            ind[i]=i;
        }
        else{
            suf[i]=suf[i+1];
            ind[i]=ind[i+1];
        }
    }
    int ans=INT_MIN;
    int a,b,c;
    set<int>s;
    unordered_map<int,int>m;
    vector<int>ve;
    ve.push_back(-1);
    s.insert(v[0]);
    m[v[0]]=0;
    fr(i,1,n-1){
        int a = lv(s,m,v[i]);
        if(a!=-1){
            if(ans<v[a]+v[i]+suf[i+1]){
                ans=v[a]+v[i]+suf[i+1];
                b=i;
                c=ind[i+1];
                ve.clear();
                ve.push_back(a+1);
                ve.push_back(b+1);
                ve.push_back(c+1);
            }
        }
        else{
            ve.clear();
            ve.push_back(-1);
        }
        if(s.find(v[i])==s.end()){
            s.insert(v[i]);
            m[v[i]]=i;
        }
    }
    return ve;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    fr(i,0,n){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>ve=sol(v,n);
    fr(i,0,ve.size()){
        cout<<ve[i]<<' ';
    }
    cout<<endl;
    return 0;
}