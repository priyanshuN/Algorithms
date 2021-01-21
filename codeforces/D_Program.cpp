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

int de(char c){
    return (c=='+')?1:-1;
}

void mami(int ma[],int mi[],int v[],string s){
    // int x=0;
    ma[0]=0;mi[0]=0;v[0]=0;
    fr(i,1,s.size()+1){
        // x+=de(s[i]);
        v[i]=v[i-1]+de(s[i-1]);
        ma[i]=max(ma[i-1],v[i]);
        mi[i]=min(mi[i-1],v[i]);
    }
}

void smami(int sma[],int smi[],string s){
    int x=0;
    int n=s.size();
    sma[n]=0;smi[n]=0;
    for(int i=n-1;i>=0;--i){
        x=de(s[i]);
        sma[i]=max(0,sma[i+1]+x);
        smi[i]=min(0,smi[i+1]+x);
    }
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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int ma[n+1],mi[n+1],v[n+1];
        mami(ma,mi,v,s);
        int sma[n+1],smi[n+1];
        smami(sma,smi,s);
        while(m--){
            int l,r;
            cin>>l>>r;
            int l1=ma[l-1],l2=mi[l-1];
            int r1=sma[r]+v[l-1],r2=smi[r]+v[l-1];
            cout<<max(l1,r1)-min(l2,r2)+1<<endl;
        }
    }
	return 0;
} 