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
    // #ifndef ONLINE_JUDGE
    // freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    // freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    // #endif
    ll a,b;
    cin>>a>>b;
    if(a<3||b<3){
        cout<<0<<endl;
    }
    else{
        ll k=((a-1)*(a-2)/2)%mod;
        ll z=((b-1)*(b-2)/2)%mod;
        ll ans=(k*z)%mod;
        cout<<ans<<endl;
    }
	return 0;
} 