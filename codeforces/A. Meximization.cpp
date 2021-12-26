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
        map<int,int>m;
        fr(i,0,n){
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0;i<=100;++i){
            if(m[i]!=0){
                cout<<i<<' ';
                m[i]--;
            }
        }
        for(int i=0;i<=100;++i){
            while(m[i]!=0){
                cout<<i<<' ';
                m[i]--;
            }
        }
        cout<<endl;
    }
	return 0;
} 