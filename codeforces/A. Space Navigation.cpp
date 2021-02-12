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
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int l=0,d=0,r=0,u=0;
        bool f=0,g=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='L')l--;
            else if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else if(s[i]=='D')d--;
        }
        // if((l>=abs(x) || r>=abs(x)) && (u>=abs(y)|| d>=abs(y))){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        if(x>=0 && r>=x){
            f=1;
        }
        if(x<=0 && l<=x){
            f=1;
        }
        if(y>=0 && u>=y){
            g=1;
        }
        if(y<=0 && d<=y){
            g=1;
        }
        if(f && g){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
} 