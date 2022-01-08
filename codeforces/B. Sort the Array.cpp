#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z=-1,k=0,l=1,r=1,x=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;++i){
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i){
        if(a[i]!=v[i].first){
            if(z!=-1){
                if(z!=i+v[i].second){
                    k=1;
                    break;
                }
                else{
                    x++;
                }
            }
            else{
                z=i+v[i].second;
                l=i+1;
                r=v[i].second+1;
            }
        }
    }
    if(k==0){
        if(abs(l-r)>2){
            if(x<=2){
                cout<<"no";
            }
            else{
                cout<<"yes"<<endl;
                if(l>r)
                    cout<<r<<' '<<l;
                else
                    cout<<l<<' '<<r;
            }
        }
        else{
            cout<<"yes"<<endl;
            if(l>r)
                cout<<r<<' '<<l;
            else
                cout<<l<<' '<<r;
        }
    }
    else
        cout<<"no";
    return 0;
}
