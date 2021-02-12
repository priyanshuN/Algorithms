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

int bin(int n, int r,int p) 
{ 
    if (r > n - r) 
        r = n - r; 
    int C[r + 1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
    for (int i = 1; i <= n; i++) { 
        for (int j = min(i, r); j > 0; j--) 
            C[j] = (C[j] + C[j - 1]) % p; 
    } 
    return C[r];
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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        int m=a[k-1];
        int l=1,p=1;
        for(int i=k;i<n;++i){
            if(a[i]==m){
                l++;
            }
        }
        for(int i=k-2;i>=0;--i){
            if(a[i]==m){
                p++;
                l++;
            }
        }
        cout<<bin(l,p,mod)<<endl;
    }
	return 0;
} 