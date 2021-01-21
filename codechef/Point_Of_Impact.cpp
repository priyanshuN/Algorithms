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
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y){
            cout<<n<<' '<<n<<endl;
        }
        else{
            int z=k%4,a=abs(y-x);
            if(x>y){
                if(z==1){
                    cout<<n<<' '<<n-a<<endl;
                }
                else if(z==2){
                    cout<<n-a<<' '<<n<<endl;
                }
                else if(z==3){
                    cout<<0<<' '<<a<<endl;
                }
                else{
                    cout<<a<<' '<<0<<endl;
                }
            }
            else{
                if(z==1){
                    cout<<n-a<<' '<<n<<endl;
                }
                else if(z==2){
                    cout<<n<<' '<<n-a<<endl;
                }
                else if(z==3){
                    cout<<a<<' '<<0<<endl;
                }
                else{
                    cout<<0<<' '<<a<<endl;
                }
            }
        }
    }
	return 0;
} 