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
        int a[n];
        fr(i,0,n){
            cin>>a[i];
        }
        double b[n+1];
        bool te[n+1];
        memset(te,0,sizeof(te));
        for(int i=0;i<=n;++i){
            b[i]=0;
        }
        fr(i,0,m){
            int x;
            double y;
            cin>>x>>y;
            b[x]=y;
            te[x]=1;
        }
        int x=n;
        double p=1;
        for(int i=n-1;i>=0;--i){
            // if(te[i+1]){
            //     p=b[i+1];
            // }
            p=b[i+1];
            if(i+1!=a[i]){
                x=i;
                break;
            }
        }
        bool f=0;
        for(int i=x+1;i<n;++i){
            // if(!f && te[i+1]){
            //     p=b[i+1];
            //     f=1;
            // }
            // if( te[i+1]){
                
            // }
            double z=1-b[i+1];
            p=b[i+1]+p*z;
            // cout<<p<<' ';
            printf("%.6f",p);
            
        }
        printf("\n");        if(x==n){
            printf("1.000000\n");
        }
        else{
            printf("%.6f\n",p);
        }
    }
	return 0;
} 