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

int gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
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
        string a,b,s;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        int k=lcm(n,m);
        string ma="",mi="";
        fr(i,0,k/n){
            ma+=a;
        }
        fr(i,0,k/m){
            mi+=b;
        }
        if(ma==mi){
            cout<<ma<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
} 