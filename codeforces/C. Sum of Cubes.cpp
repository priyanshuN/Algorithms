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
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main(){
	// ios_base::sync_with_stdio(0);
 //    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    fast
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool f=0;
        ll b=10000;
        for(ll i=1;i<=min(b,n-1);i++){
            if(i*i*i>=n){
                break;
            }
            ll z=cbrt(n-i*i*i);
            if(z*z*z + i*i*i ==n){
                f=1;
                break;
            }
        }
        if(f){
            printf("YES\n" );
        }
        else{
            printf("NO\n" );
        }
    }
	return 0;
} 