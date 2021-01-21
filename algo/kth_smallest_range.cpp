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

void build(vector<int>&v[],vector<pi>&a,int s,int e,int node){
    if(s==e){
        v[node].push_back(a[l].second);
    }
    int mid=(s+e)/2;
    build(v,a,s,mid,2*node);
    build(v,a,mid+1,e,2*node+1);
    merge(v[2*node].begin(),v[2*node].end(),v[2*node+1].begin(),v[2*node+1].end(),back_inserter(v[node]));
}




int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    fr(i,0,n){
    	cin>>a[i];
    }
    fr(i,0,n){
    	cout<<a[i];
    }
	return 0;
} 