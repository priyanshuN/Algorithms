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
    int t;
    cin>>t;
    while(t--){
        ll at,bt,n;
        cin>>at>>bt>>n;
        ll a[n];
        ll b[n];
        vector<pl>v;
        for(ll i=0;i<n;++i){
            cin>>a[i];
            // z-=a[i];
        }
        for(ll i=0;i<n;++i){
            cin>>b[i];
        }
        for(ll i=0;i<n;++i){
            v.pb({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        bool f=0;
        for(ll i=0;i<n;++i){
            if(bt<=0){
                f=1;
                break;
            }
            ll z=v[i].ss/at;
            ll k=v[i].ss%at;
            if(k!=0)z++;
            ll d=bt/v[i].ff;
            ll j=bt%v[i].ff;
            if(j!=0)d++;
            if(d<z){
                f=1;
                break;
            }
            bt-=v[i].ff*(z);
        }
        if(!f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
} 