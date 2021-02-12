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
    int n;
    cin>>n;
    n=n+2;
    int a[n];
    memset(a,-1,sizeof(a));
    a[0]=INT_MAX;
    a[n-1]=INT_MAX;
    int t=100;
    int l=0,r=n-1;
    while(t--){
        int mid=(l+r)/2;
        if(a[mid]==-1){
            cout<<"? "<<mid<<endl;
            cin>>a[mid];
        }
        if(a[mid-1]==-1){
            cout<<"? "<<mid-1<<endl;
            cin>>a[mid-1];
        }
        if(a[mid+1]==-1){
            cout<<"? "<<mid+1<<endl;
            cin>>a[mid+1];
        }
        if(a[mid]<a[mid-1]  && a[mid]<a[mid+1]){
            cout<<"! "<<mid<<endl;
            cout.flush();
            break;
        }
        else if( a[mid]>a[mid-1]){
            r=mid-1;
        }
        else if(a[mid]>a[mid+1]){
            l=mid+1;
        }
    }
	return 0;
} 