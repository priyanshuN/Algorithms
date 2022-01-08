#include<bits/stdc++.h>
using namespace std;
long long int z=0;
void merge(int a[],int start,int mid,int end){
	int p=start,q=mid+1,A[-start+end+1],k=0;
	for(int i=start;i<=end;++i){
		if(p>mid){
			A[k++]=a[q++];
		}
		else if(q>end){
			A[k++]=a[p++];
		}
		else if(a[p]>a[q]){
		    z+=q-i;
			A[k++]=a[q++];
		}
		else{
			A[k++]=a[p++];
		}
	}
	for(int i=0;i<k;++i){
		a[start++]=A[i];
	}
}
void merge_sort(int a[],int start,int end){
	if(start<end){
		int mid = (start+end)/2;
		merge_sort(a,start,mid);
		merge_sort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	/*for(int i=0;i<n;++i){
		cout<<a[i]<<' ';
	}
	cout<<endl;*/
	merge_sort(a,0,n-1);
	/*for(int i=0;i<n;++i){
		cout<<a[i]<<' ';
	}*/
	cout<<z;
	return 0;
}
