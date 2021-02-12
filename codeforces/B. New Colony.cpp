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
        int n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        ll z=0;
        bool f=0;
        for(int i=0;i<n-1;++i){
            if(a[i]<a[i+1]){
                for(int j=0;j<=i;j++){
                    z+=a[j]-a[i+1];
                    a[j]=a[i+1];
                }
                if(z>=k){
                    cout<<i+1<<endl;
                    f=1;
                    break;
                }
            }
            // if(z>=k){
            //     cout<<i+1<<endl;
            //     f=1;
            //     break;
            // }
        }
        if(!f){
            cout<<-1<<endl;
        }
    }
	return 0;
} 