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
        ll z=0;
        for(int i=1;i<n;++i){
            z+=1ll*(i*i);
        }
        cout<<z<<endl;
        cout<<n<<' ';
        fr(i,1,n){
            cout<<i<<' ';
        }
        cout<<endl;
        cout<<n-1<<endl;
        vector<pi>v;
        for(int i=1;i<n;++i){
            v.pb({1,i+1});
        }
        for(int i=v.size()-1;i>=0;--i){
            cout<<v[i].ss<<' '<<v[i].ff<<endl;
        }
    }
	return 0;
} 