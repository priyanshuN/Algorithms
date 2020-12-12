#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define mod 1000000007
#define IMA INT_MAX
#define IMI INT_MIN
#define fr(i,s,n) for(int i=s;i<n;++i)
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int n,i;
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