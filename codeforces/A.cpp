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
        int n,d;
        cin>>n>>d;
        int a[n];
        vector<pi>v;
        fr(i,0,n){
            cin>>a[i];
            v.pb({a[i],i});
        }
        sort(v.begin(),v.end());
        bool f=0;
        fr(i,0,n){
            if(a[i]>d){
                if(v[0].ss==i){
                    if(v[1].ff+v[2].ff >d){
                        f=1;
                        break;
                    }
                }
                else if(v[1].ss==i){
                    if(v[0].ff+v[2].ff>d){
                        f=1;
                        break;
                    }
                }
                else{
                    if(v[0].ff +v[1].ff>d){
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
} 