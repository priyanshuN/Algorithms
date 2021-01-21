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


// int sol(vector<int>v,int k,int n){
//     int m=0,t=0,i=0,ans=0;
//     while(m<k && t<k){
//         if(i+1 >n-1){
//             return -1;
//         }
//         if(m<t){
//             m+=v[i];
//             t+=v[i+1];
//         }
//         else{
//             m+=v[i+1];
//             t+=v[i];
//         }
//         cout<<m<<' '<<t<<endl;
//         i+=2;
//         ans+=2;
//     }
//     while(m<k){
//         if(i>n-1){
//             return -1;
//         }
//         m+=v[i];
//         i++;
//         ans++;
//     }
//     while(t<k){
//         if(i>n-1){
//             return -1;
//         }
//         t+=v[i];
//         i++;
//         ans++;
//     }
//     return ans;
// }

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
        int n,k;
        cin>>n>>k;
        int a[n];
        int sum[n];
        fr(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        fr(i,0,n){
            if(i==0){
                sum[i]=a[i];
            }
            else{
                sum[i]=sum[i-1]+a[i];
            }
            // cout<<sum[i]<<' ';
        }
        // cout<<endl;
        int dp[n+1][k+1];
        memset(dp,9999999,sizeof(dp));
        dp[0][0]=0;
        fr(i,1,n+1){
            for(int j=k;j>=0;--j){
                if(j<=a[i-1]){
                    dp[i][j]=a[i-1];
                    continue;
                }
                if(dp[i-1][j-a[i-1]]!=9999999){
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j-a[i-1]]+a[i-1]);
                }
                else{
                    dp[i][j]=9999999;
                }
            }
        }
        // fr(i,0,n+1){
        //     cout<<dp[i][k]<<' ';
        // }
        // cout<<endl;
        bool f=0;
        fr(i,0,n){
            if((sum[i]-dp[i+1][k])>=k){
                // cout<<sum[i]-dp[i+1][k]<<' ';
                cout<<i+1<<endl;
                f=1;
                break;
            }
        }
        if(!f){
            cout<<-1<<endl;
        }
    }
	return 0;
} 