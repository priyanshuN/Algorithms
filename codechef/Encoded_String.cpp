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

string s="abcdefghijklmnop";

string cal(char c,int l,int r,string ss){
    if(l>=r)return ss;
    int mid=(l+r)/2;
    if(c<=s[mid]){
        ss+="0";
        return cal(c,l,mid,ss);
    }
    else{
        ss+="1";
        return cal(c,mid+1,r,ss);
    }
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    unordered_map<char,string>m;
    unordered_map<string,char>m1;
    fr(i,0,16){
        m[s[i]]=cal(s[i],0,15,"");
        m1[m[s[i]]]=s[i];
        // cout<<s[i]<<' '<<m[s[i]]<<endl;
        // cout<<m1[m[s[i]]]<<endl;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str,st="";
        cin>>str;
        for(int i=0;i<n;i+=4){
            st+=m1[str.substr(i,4)];
        }
        cout<<st<<endl;
    }
	return 0;
} 