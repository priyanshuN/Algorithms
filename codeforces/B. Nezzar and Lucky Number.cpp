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

int sol(int d,int x){
    for(int i=1;i<=10;++i){
        int z=d*i;
        if(z%10==x){
            return (z/10);
        }
    }
    return -1;
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
        int  n,d;
        cin>>n>>d;
        int a[n];
        fr(i,0,n){
            cin>>a[i];
        }
        for(int i=0;i<n;++i){
            
            if(a[i]<10*d ){
                int x=a[i]%10,y=(a[i]/10)%10;
                int k=sol(d,x);
                // cout<<k<< ' ';
                if(k==-1 || k>y){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
                
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
	return 0;
} 