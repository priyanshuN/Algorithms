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

int dpl[5011][5011];
int dpr[5011][5011];
vector<int>pos[5011];
int func(char c){
    if(c>='a' and c<='z') return c-'a';
    if(c>='A' and c<='Z') return c-'A'+26;
    return c-'0'+52;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    string A,B;
    cin>>A>>B;
    int N,M;
    N=A.length();
    M=B.length();
    fr(i,0,M){
        pos[func(B[i])].pb(i+1);
    }
    fr(i,1,N+1){
        fr(j,1,M+1){
            if(A[i-1]==B[i-1]){
                dpl[i][j]=dpl[i-1][j-1]+1;
            }
            else{
                dpl[i][j]=max(dpl[i-1][j],dpl[i][j-1]);
            }
        }
    }
    int LCS=dpl[N][M];

    for(int i=N;i>=1;i--){
        for(int j=M;j>=1;j--){
            if(A[i-1]==B[j-1]){
                dpr[i][j]=dpr[i+1][j+1]+1;
            }
            else{
                dpr[i][j]=max(dpr[i+1][j],dpr[i][j+1]);
            }
        }
    }
    ll ans=0;
    fr(i,0,N+1){
        fr(j,0,62){
            for(auto x:pos[j]){
                if(dpl[i][x-1]+dpr[i+1][x+1]==LCS){
                    ans=(ans+1)%mod;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
	return 0;
} 