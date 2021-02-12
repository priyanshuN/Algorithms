#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pii pair<int,pi>
#define IMA INT_MAX
#define IMI INT_MIN
#define pl pair<ll,ll>
#define pll pair<ll,pl>
#define ff first
#define mp make_pair
#define mod 1000000007
#define ss second
#define pb push_back
#define fr(i,s,n) for(int i=s;i<n;++i)


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int t1;
    cin>>t1;
    while(t1--){
        // cout<<t1<<endl;
        int  n,m;
        cin>>n>>m;
        int a[n],b[n];
        vector<int>v1,v2;
        fr(i,0,n){
            cin>>a[i];
        }
        fr(i,0,n){
            cin>>b[i];
            if(b[i]==1){
                v1.pb(a[i]);
            }
            else{
                v2.pb(a[i]);
            }
        }
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        int i=0,j=0,z=0;
        pll x,y,t;
        // cout<<v2.size()<<"--"<<endl;
        if(v1.size()>=1){
            z=v1[0];
        }
        y={0,{0,0}};
        x={z,{i+1,j}};
        if(x.ff>=m){
            cout<<1<<endl;
            continue;;
        }
        bool f=0;
        for(ll k=2;k<=2*n;++k){
            t=x;
            if(v1.size()!=0 && x.ss.ff < v1.size() && v2.size()!=0 && y.ss.ss < v2.size() ){
                if(y.ff+v2[y.ss.ss]>x.ff+v1[x.ss.ff]){
                    x={y.ff+v2[y.ss.ss],{y.ss.ff,y.ss.ss+1}};
                }
                else{
                    x={x.ff+v1[x.ss.ff],{x.ss.ff+1,x.ss.ss}};
                }
            }
            else if(v2.size()!=0 && y.ss.ss < v2.size()){
                x={y.ff+v2[y.ss.ss],{y.ss.ff,y.ss.ss+1}};
            }
            else if(v1.size()!=0 && x.ss.ff < v1.size()){
                x={x.ff+v1[x.ss.ff],{x.ss.ff+1,x.ss.ss}};
            }
            else if(v1.size()==0 || x.ss.ff >= v1.size()||v2.size()==0 || y.ss.ss >= v2.size()){
                cout<<-1<<endl;
                f=1;
                break;
            }
            if(x.ff>=m){
                cout<<k<<endl;
                f=1;
                break;
            }
            y=t;
        }
        if(!f){
            cout<<-1<<endl;
        }
    }
	return 0;
} 