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
        string mi,ma;
        if(n<m){
            mi=a;
            ma=b;
        }
        else{
            mi=b;
            ma=a;
        }
        bool f=0;
        fr(i,0,min(n,m)){
            if(ma[i]!=ma[i]){
                f=1;
                break;
            }
        }
        bool c=0,d=0;
        fr(i,1,n){
            if(a[i]!=a[i-1]){
                c=1;
            }
        }
        fr(i,1,m){
            if(b[i]!=b[i-1]){
                d=1;
            }
        }
        if(f){
            cout<<-1<<endl;
        }

        else{
             // cout<<c<<' '<<d<<endl;
            if(c==0 && d==0 && a[0]==b[0]){
                int k=lcm(n,m);
                fr(i,0,k){
                    cout<<b[0];
                }
                cout<<endl;
            }
            else{
                int l=0;
                fr(i,min(m,n),max(m,n)){
                    if(ma[i]!=mi[l++]){
                        f=1;
                        break;
                    }
                }
                if(f || (max(m,n)%min(n,m)!=0)){
                    cout<<-1<<endl;
                }
                else{
                    int k=lcm(n,m);
                    fr(i,0,(int)k/min(n,m)){
                        cout<<mi;
                    }
                    cout<<endl;
                }
            }
        }
    }
	return 0;
} 