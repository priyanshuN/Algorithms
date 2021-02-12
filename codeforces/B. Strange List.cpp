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

ll sol(ll n,ll x){
    ll z=0;
    while(n%x==0){
        z++;
        n=n/x;
    }
    return z;
}
bool sol1(ll n,ll x){
    while(n%x==0){
        n=n/x;
    }
    if(n==1)return 1;
    return 0;
}

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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        queue<pl> q;
        ll z=0;
        ll dp[n+1];
        memset(dp,0,sizeof(dp));
        for(ll i=0;i<n;++i){
            cin>>a[i];
            z+=a[i];
            dp[i+1]=z;
        }
        ll v[n];
        ll mi=INT_MAX;
        int j=0;
        for(int i=0;i<n;++i){
            v[i]=sol(a[i],x);
            if(v[i]<mi){
                mi=v[i];
                j=i;
            }
        }
        z+=dp[j]+mi*z;
        cout<<z<<endl;
    }
	return 0;
} 