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

struct student{
    string user;
    int score;
    int rank;
    set<string>::iterator utr;
    set<int>:: iterator str;
    student(string user,int score,int rank,set<string>::iterator utr,set<int>:: iterator str){
        this->user=user;
        this->score=score;
        this->rank=rank;
        this->utr=utr;
        this->str=str;
    }
};

set<string>suser;
set<int>sscore;
map<string,struct student*>m;
void add_user(string name,int score){
    suser.insert(name);
    sscore.insert(score);
    
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    fr(i,0,n){
    	cin>>a[i];
    }
    fr(i,0,n){
    	cout<<a[i];
    }
	return 0;
} 