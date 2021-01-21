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

bool valley(int a[],int i,int n){
    if(i > 0 && i < n - 1 && a[i]<a[i-1] && a[i]<a[i+1]){
        return 1;
    }
    return 0;
}

bool hill(int a[],int i,int n){
    if(i > 0 && i < n - 1 && a[i]>a[i-1] && a[i]>a[i+1]){
        return 1;
    }
    return 0;
}


int count(int a[],bool b[],int n){
    int z=0;
    fr(i,1,n-1){
        if(valley(a,i,n)||hill(a,i,n)){
            b[i]=1;
            z++;
        }
    }
    return z;
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
        int n;
        cin>>n;
        int  a[n];
        bool b[n];
        fr(i,0,n){
            cin>>a[i];
            b[i]=0;
        }
        int s=count(a,b,n),ans=s;
        fr(i,1,n-1){
            int t=a[i];
            a[i]=a[i-1];
            ans=min(ans,s-b[i-1]-b[i]-b[i+1]+hill(a,i-1,n)+hill(a,i+1,n)+hill(a,i,n)+valley(a,i-1,n)+valley(a,i,n)+valley(a,i+1,n));
            a[i]=a[i+1];
            ans=min(ans,s-b[i-1]-b[i]-b[i+1]+hill(a,i-1,n)+hill(a,i+1,n)+hill(a,i,n)+valley(a,i-1,n)+valley(a,i,n)+valley(a,i+1,n));
            a[i]=t;
        }
        cout<<ans<<endl;
    }
	return 0;
} 