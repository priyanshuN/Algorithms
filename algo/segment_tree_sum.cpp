#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define mod 1000000007
#define IMA INT_MAX
#define IMI INT_MIN
#define fr(i,s,n) for(int i=s;i<n;++i)

int constructUtil(int a[],int s,int e,int *st,int i){
	if(s==e){
		st[i]=a[s];
		return st[i];
	}
	int mid=s + (e -s)/2;;
	st[i]=constructUtil(a,s,mid,st,2*i+1)+constructUtil(a,mid+1,e,st,2*i+2);
	return st[i];
}

int *construct(int a[],int n){
	int h=(int)(ceil(log2(n)));
	int m_size = 2*(int)pow(2,h) - 1;
	int *st=new int[m_size];
	constructUtil(a,0,n-1,st,0);
	return st;
}

int getSum(int s,int e,int *st,int l,int r,int i){
	
	if(l<=s && r>=e){
		return st[i];
	}
	if(l>e || r<s){
		return 0;
	}
	int mid=s + (e -s)/2;
	return getSum(s,mid,st,l,r,2*i+1) + getSum(mid+1,e,st,l,r,2*i+2);
}

void updateUtil(int *st,int s,int e,int ind,int diff,int i){
	if(ind<s || ind>e)return;
	st[i]=st[i]+diff;
	if(s!=e){
		int mid=s + (e -s)/2;;
		updateUtil(st,s,mid,ind,diff,2*i+1);
		updateUtil(st,mid+1,e,ind,diff,2*i+2);
	}
}

void update(int a[],int n,int *st,int i,int new_){
	int diff=new_-a[i];
	a[i]=new_;
	updateUtil(st,0,n-1,i,diff,0);
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int n,i;
    cin>>n;
    int a[n];
    fr(i,0,n){
    	cin>>a[i];
    }
    int h=(int)(ceil(log2(n)));
    int *st=construct(a,n);
    cout<<getSum(0,n-1,st,1,3,0)<<endl;
    update(a,n,st,1,4);
    cout<<getSum(0,n-1,st,1,3,0)<<endl;
	return 0;
} 