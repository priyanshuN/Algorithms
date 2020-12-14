#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define mod 1000000007
#define IMA INT_MAX
#define IMI INT_MIN
#define fr(i,s,n) for(int i=s;i<n;++i)

int constructUtil(int a[],int s,int e,int* st,int i){
	if(s==e){
		st[i]=a[s];
		return st[i];
	}
	int mid=s + (e -s)/2;
	st[i]=min(constructUtil(a,s,mid,st,2*i+1),constructUtil(a,mid+1,e,st,2*i+2));
	return st[i];
}

int *construct(int a[],int n){
	int h=(int)(ceil(log2(n)));
	int m_size = 2*(int)pow(2,h) - 1;
	int *st=new int[m_size];
	constructUtil(a,0,n-1,st,0);
	return st;
}

int getRange(int s,int e,int *st,int l,int r,int i){
	if(l<=s && e<=r){
		return st[i];
	}
	if(l>e || r<s){
		return INT_MAX;
	}
	int mid=s + (e -s)/2;
	return min(getRange(s,mid,st,l,r,2*i+1),getRange(mid+1,e,st,l,r,2*i+2));
}

void update(int a[],int *st,int s,int e,int ind,int diff,int i){
	if(s==e){
		a[s]=diff;
		st[i]=diff;
	}
	else{
		int mid=(s+e)/2;
		if(i>=s && i<=mid){
			update(a,st,s,mid,ind,diff,2*i+1);
		}
		else{
			update(a,st,mid+1,e,ind,diff,2*i+2);
		}
		st[i]=min(st[2*i+1],st[2*i+2]);
	}
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
    int *st=construct(a,n);
    cout<<getRange(0,n-1,st,1,3,0)<<endl;
    update(a,st,0,n-1,1,10,0);
    cout<<getRange(0,n-1,st,1,3,0)<<endl;
	return 0;
}