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
        ll n,x;
        cin>>n>>x;
        ll z=0,l=0,y=0;
        ll a[n];
        for(ll i=0;i<n;++i){
            cin>>a[i];
            l+=(a[i]/x);
            if(a[i]%x!=0){
                l+=1;
            }
            z+=a[i];
        }
        if(z%x!=0){
            y++;
        }
        y+=(z/x);
        cout<<y<<' '<<l<<endl;
    }
	return 0;
} 