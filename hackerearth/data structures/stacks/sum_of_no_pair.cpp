#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int x,int s,int e){
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]>x){
			return binary_search(a,x,s,mid-1);
		}
		else if(a[mid]<x){
			return binary_search(a,x,mid+1,e);
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m;
	cin>>m>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int s=0,e=n-1,count=0;
	while(s<e){
		if(a[s]>m){
			break;
		}
		else if(a[s]+a[e]>m){
			e--;
		}
		else if(a[s]+a[e]<m){
			s++;
		}
		else{
			s++;
			e--;
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}