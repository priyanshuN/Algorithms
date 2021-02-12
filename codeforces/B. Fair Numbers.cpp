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
        unsigned long long n,x,y;
        cin>>n;
        x=n-1;
        while(1){
            bool f=0;
            bool a[10];
            x++;
            y=x;
            memset(a,0,sizeof(a));
            while(y>0){
                a[y%10]=1;
                y=y/10;
            }
           
            for(int i=1;i<=9;++i){
                if(a[i]){
                    if(x%i!=0){
                        f=1;
                        break;
                    }
                }
            }
            if(!f){
                cout<<x<<endl;
                break;
            }
        }
    }
	return 0;
} 