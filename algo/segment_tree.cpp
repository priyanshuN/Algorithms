#include<bits/stdc++.h>
using namespace std;
int s[1000],lazy[1000],sum;
void build_segment_tree(int k,int l,int r,int a[],int s[]){
	if(l==r){
		s[k]=a[l];
	}
	else{
		int mid=(l+r)>>1;
		build_segment_tree(2*k,l,mid,a,s);
		build_segment_tree(2*k+1,mid+1,r,a,s);
		s[k]=s[2*k]+s[2*k+1];
	}

}
// int build_segment_tree(int k,int l,int r,int a[],int s[]){
// 	if(l==r){
// 		s[k]=a[l];
// 		return a[l];
// 	}
	
// 		int mid=(l+r)>>1;
// 		s[k]=build_segment_tree(2*k,l,mid,a,s)+build_segment_tree(2*k+1,mid+1,r,a,s);
// 		// return s[k];

// }

void update(int k,int l,int r,int a[],int val,int i){
	if(l==r && l==i){
		a[i]+=val;
		s[k]+=val;
	}
	else{
		int mid=(l+r)>>1;
		if(i>=l && i<=mid){
			update(2*k,l,mid,a,val,i);
		}
		else if(i>=mid+1 && i<=r){
			update(2*k+1,mid+1,r,a,val,i);
		}
		s[k]=s[2*k]+s[2*k+1];
		// s[k]+=val;
	}
}

int query(int k,int l,int r,int L,int R,int a[]){
	if(l>=L && r<=R){
		return s[k];
	}
	else if(l>R || r<L){
		return 0;
	}
	else{
		int mid=(l+r)>>1;
		int x=query(2*k,l,mid,L,R,a);
		int y=query(2*k+1,mid+1,r,L,R,a);
		return x+y;
	}
}

void lupdate(int k,int l,int r,int L,int R,int a[],int val){
	if(lazy[k]!=0){
		s[k]+=(r-l+1)*lazy[k];
		if(l!=r){
			l[2*k+1]+=lazy[k];
			l[2*k+2]+=lazy[k];
		}
		lazy[k]=0;
	}
	if(l>r || l>R || r<L){
		return;
	}
	if(l>=L && r<=R){
		s[k]+=(r-l)*val;
		if(l!=r){
			lazy[2*k+1]+=val;
			lazy[2*k+2]+=val;
		}
		return;
	}
	int mid=(l+r)>>1;
	lupdate(2*k+1,l,mid,L,R,a,val);
	lupdate(2*k+2,mid+1,r,L,R,val);
	s[k]=s[2*k+1]+s[2*k+2];
}

int lquery(int k,int l,int r,int L,int R,int a[]){
	if(l>r || l>R || r<L){
		return 0;
	}
	if(lazy[k]!=0){
		s[k]+=(r-l+1)*lazy[k];
		if(l!=r){
			lazy[2*k+1]+=lazy[k];
			lazy[2*k+2]+=lazy[k];
		}
		lazy[k]=0;
	}
	if(l>=L && r<=R){
		return s[k];
	}
	else{
		int mid=(l+r)>>1;
		int x=lquery(2*k+1,l,mid,L,R,a);
		int y=lquery(2*k+2,mid+1,r,L,R,a);
		return (x+y);
	}
}

void print(int n,int arr[]){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	int n;
	cin>>n;
	int a[n];
	s[0]=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	build_segment_tree(1,0,n-1,a,s);
	print(n,a);
	print(4 *n,s);
	update(1,0,n-1,a,1,0);
	print(4 *n,s);
	sum=query(1,0,n-1,0,5,a);
	cout<<sum<<endl;
	return 0;
}
// Test case
// 6
// 1 3 5 7 9 11

// Sol:
// 1 3 5 7 9 11 
// 0 36 9 27 4 5 16 11 1 3 0 0 7 9 0 0 0 0 0 0 0 0 0 0 
// 0 37 10 27 5 5 16 11 2 3 0 0 7 9 0 0 0 0 0 0 0 0 0 0 
// 37
