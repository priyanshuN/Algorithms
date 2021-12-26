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
        map<int,int>ma;
        fr(i,0,n){
            cin>>a[i];
            a[i]=a[i]%m;
            ma[a[i]]++;
        }
        ll z=0;
        for(auto it=ma.begin();it!=ma.end();it++){
            int ind=it->ff;
            int c=ma[ind],d=ma[m-ind];
            if(ind==0){
                z++;
                ma[0]=0;
            }
            else{
                if(c>0 && d>0){
                    z++;
                    int h=min(c,d)+1;
                    ma[ind]-=h;
                    ma[m-ind]-=h;
                }
                if(ma[ind]>0){
                    z+=ma[ind];
                    ma[ind]=0;
                }
                if(ma[m-ind]>0){
                    z+=ma[m-ind];
                    ma[m-ind]=0;
                }
            }
        }
        cout<<z<<endl;
    }
	return 0;
} 