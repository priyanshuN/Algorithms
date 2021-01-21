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
        int n;
        cin>>n;
        string s,st;
        cin>>s;
        st="1";
        int x=(st[0]-'0')+(s[0]-'0');
        fr(i,1,n){
            if(x==2){
                st+=to_string(1-(s[i]-'0'));
            }
            else if(x==1){
                st+=s[i];
            }
            else{
                st+="1";
            }
            x=(st[i]-'0')+(s[i]-'0');
        }
        cout<<st<<endl;
    }
	return 0;
} 