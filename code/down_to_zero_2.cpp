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
int dp[100001];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int qu;
    cin>>qu;
    while(qu--){
        int n;
        cin>>n;
        if(n==0){
            cout<<0<<endl;
            break;
        }
        queue<int>q;
        q.push(n);
        dp[n]=1;
        while(!q.empty()){
            int no=q.front();
            q.pop();
            if(dp[no-1]==0){
                dp[no-1]=dp[no]+1;
                if(no-1==0){
                    break;
                }
                q.push(no-1);
            }
            for(int i=2;i*i<=no;++i){
                if(no%i==0){
                    int f=max(i,no/i);
                    if(!dp[f]){
                        dp[f]=dp[no]+1;
                        q.push(f);
                    }
                }
            }
        }
        cout<<dp[0]-1<<endl;
        memset(dp,0,sizeof(dp));
    }
	return 0;
} 