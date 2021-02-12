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

struct node{
    int i;
    int j;
    int d;
    int l;
};

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
        // int dp[2*n+2][2*n+2];
        // memset(dp,0,sizeof(dp));
        queue<node>q;
        q.push({n-1,n,0,1});
        q.push({n,n+1,1,1});
        q.push({n+1,n,2,1});
        q.push({n,n-1,3,1});
        // dp[n-1][n]=1;
        // dp[n+1][n]=1;
        // dp[n][n-1]=1;
        // dp[n][n+1]=1;
        int lv=1,ans=4;
        set<pi>s;
        for(int k=2;k<n+1;++k){
            int z=q.size();
            ans=z;
            for(int h=0;h<z;++h){
                struct node t=q.front();
                q.pop();
                if(t.d==0){
                    q.push({t.i,t.j+1,1,k});
                    q.push({t.i,t.j-1,3,k});
                    // dp[t.i][t.j+1]=k;
                    // dp[t.i][t.j-1]=k;
                    if(k==n){
                        s.insert({t.i,t.j+1});
                        s.insert({t.i,t.j-1});
                    }
                    
                }
                else if(t.d==2){
                    q.push({t.i,t.j+1,1,k});
                    q.push({t.i,t.j-1,3,k});
                    // dp[t.i][t.j+1]=k;
                    // dp[t.i][t.j-1]=k;
                    if(k==n){
                        s.insert({t.i,t.j+1});
                        s.insert({t.i,t.j-1});
                    }
                }
                else if(t.d==1){
                    q.push({t.i+1,t.j,2,k});
                    q.push({t.i-1,t.j,0,k});
                    // dp[t.i-1][t.j]=k;
                    // dp[t.i+1][t.j]=k;
                    if(k==n){
                        s.insert({t.i+1,t.j});
                        s.insert({t.i-1,t.j});
                    }
                    
                }
                else if(t.d==3){
                    q.push({t.i+1,t.j,2,k});
                    q.push({t.i-1,t.j,0,k});
                    // s.insert({t.i+1,t.j});
                    // s.insert({t.i-1,t.j});
                    // dp[t.i-1][t.j]=k;
                    // dp[t.i+1][t.j]=k;
                    if(k==n){
                        s.insert({t.i+1,t.j});
                        s.insert({t.i-1,t.j});
                    }
                }
            }
        }
        // int ans=0;
        // for(int i=0;i<=2*n+2;++i){
        //     for(int j=0;j<2*n+2;++j){
        //         if(dp[i][j]==n){
        //             ans++;
        //         }
        //     }
        // }
        if(n==1)cout<<4<<endl;
        else cout<<s.size()<<endl;
    }
	return 0;
} 