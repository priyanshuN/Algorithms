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
    int y[100001];
    int l[100001];
    int r[100001];

    fr(i,0,100001){
    	y[i]=500;
    	l[i]=0;
    	r[i]=100000;
    }
    r[100000]=0;
    stack<int>s;
    fr(i,0,n){
    	int a,b;
    	cin>>a>>b;
    	y[a]=min(y[a],b);
    }
    fr(i,0,100001){
    	while(!s.empty() && y[s.top()]>=y[i]){
    		s.pop();
    	}
    	if(s.empty())l[i]=0;
    	else l[i]=s.top();
    	if(y[i]!=500)s.push(i);
    }
    while(!s.empty()){
    	s.pop();
    }
    for(int i=100000;i>=0;--i){
    	while(!s.empty() && y[s.top()]>=y[i]){
    		s.pop();
    	}
    	if(s.empty())r[i]=100000;
    	else r[i]=s.top();
    	if(y[i]!=500)s.push(i);
    }
    ll ar = 100000;
    ll t;
    fr(i,0,100001){
        t=(r[i]-l[i])*y[i];
    	ar=max(ar,t);
    }
    cout<<ar<<endl;
	return 0;
} 