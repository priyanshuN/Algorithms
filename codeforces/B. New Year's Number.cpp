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


string sol(int  n){
    for(int i=0;i<=(int)(n/2021);++i){
        double k=(2021*i);
        double n1=n;
        double g=(n1-k)/((double)2020);
        // if((ceil((n-(2021*i))/2020)-floor((n-(2021*i))/2020))==0){
        //     cout<<ceil((n-(2021*i))/2020)<<endl;
        //     return "YES";
        // }
        // cout<<(floor(g)-ceil(g))<<endl;
        if((floor(g)-ceil(g))>0) {
            return "NO";
        }
    }
    return "YES";
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
        int  n;
        cin>>n;
        cout<<sol(n)<<endl;
    }
	return 0;
} 