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
        int a[n];
        int c0=0,c1=0,c2=0;
        fr(i,0,n){
            cin>>a[i];
            if(a[i]%3==0)c0++;
            else if(a[i]%3==1)c1++;
            else c2++;
        }
        int z=n/3,ans=0,k;
        while(!(c0==c1 && c1==c2)){
             if(c0>=c1){
                k=min(c0,z-c1);
                c1+=k;
                c0-=k;
                ans+=k;
            }
            if(c1>=c2){
                k=min(c1,z-c2);
                c2+=k;
                c1-=k;
                ans+=k;
            }
            if(c2>=c0){
                k=min(c2,z-c0);
                c0+=k;
                c2-=k;
                ans+=k;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
} 