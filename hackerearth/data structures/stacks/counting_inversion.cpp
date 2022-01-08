#include<bits/stdc++.h>
using namespace std;

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i){
        if(v[i].second-i>0){
            a[v[i].second]=v[i].second-i;
        }
        else{
            a[v[i].second]=0;
        }
    }

    long long int z=0;
    for(int i=0;i<n;++i){
        cout<<v[i].first<<' '<<v[i].second;
        z+=a[i];
    }
    cout<<z;
    return 0;
}
