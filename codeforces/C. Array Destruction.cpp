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
        int a[2*n];
        fr(i,0,2*n){
            cin>>a[i];
        }
        sort(a,a+2*n,greater<int>());
        bool fl=0;
        vector<pi>v;
        for(int i=1;i<2*n;++i){
            int m=a[0],j=1;
            v.clear();
            v.pb({a[i],a[0]});
            map<int,int>mp;
            fr(k,1,2*n){
                if(k!=i){
                   mp[a[k]]++;
                }
            }
            for(int l=0;l<n-1;++l){
                if(i==j){
                    j++;
                }
                while(mp.find(a[j])==mp.end()){
                    j++;
                }
                // if(i==2)
                //     cout<<m<<' '<<a[j]<<endl;
                if(mp.find(m-a[j])!=mp.end()){
                    mp[a[j]]--;
                    
                    if(mp[a[j]]==0){
                        mp.erase(a[j]);
                    }
                    mp[m-a[j]]--;
                    if(mp[m-a[j]]==0){
                        mp.erase(m-a[j]);
                    }
                    v.pb({m-a[j],a[j]});
                    m=a[j];
                    j++;
                }
                else{
                    break;
                }
            }
            // if(t==0 && i==2){
            //     cout<<mp.size()<<' '<<(mp.begin()->second)<<endl;
            // }
            if(mp.size()==0){
                fl=1;
                break;
            }
        }
        if(fl){
            cout<<"YES"<<endl;
            cout<<v[0].ff+v[0].ss<<endl;
            for(int i=0;i<v.size();++i){
                cout<<v[i].ff<<' '<<v[i].ss<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
} 