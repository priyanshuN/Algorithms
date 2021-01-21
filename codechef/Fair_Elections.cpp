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
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        ll sa=0,sb=0;
        fr(i,0,n){
            cin>>a[i];
            sa+=a[i];
        }
        fr(i,0,m){
            cin>>b[i];
            sb+=b[i];
        }
        if(sa>sb){
            cout<<0<<endl;
            continue;
        }
        sort(a,a+n);
        sort(b,b+m,greater<int>());
        int z=0;
        bool f=0;
        fr(i,0,min(n,m)){
            sa+=b[i]-a[i];
            sb+=a[i]-b[i];
            z++;
            if(sa>sb){
                cout<<z<<endl;
                f=1;
                break;
            }
        }
        if(!f){
            cout<<-1<<endl;
        }
    }
	return 0;
} 