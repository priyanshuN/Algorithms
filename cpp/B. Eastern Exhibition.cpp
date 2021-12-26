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
        int n;
        cin>>n;
        ll a[n];
        vector<pl>v;
        ll x1=0,y1=0;
        fr(i,0,n){
            ll x,y;
            cin>>x>>y;
            v.pb({x,y});
            x1+=x;
            y1+=y;
        }
        ll cx=ceil(x1/n),cy=ceil(y1/n);
        ll fx=floor(y1/n),fx=floor(y1/n);
        ll ax,ay;
        if(cx-fx==0){
            ax=1;
        }
        else{
            if((x1*2)%n==0){
                ax=2;
            }
            else ax=1;
        }
        if(cy-fy==0){
            ay=1;
        }
        else{
            if((y1*2)%n==0){
                ay=2;
            }
            else ay=1;
        }
        
        // fr(i,0,n){
        //     cout<<v[i].ff<<' '<<v[i].ss<<endl;
        // }

    }
	return 0;
} 