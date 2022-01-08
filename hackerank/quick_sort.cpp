#include<bits/stdc++.h>
using namespace std;

int pivot (int a[],int start,int end){
	int j=start+1,pivot=a[start];
	for(int i= start+1;i<=end;++i){
		if(a[i]<pivot){
			swap(a[j],a[i]);
			j++;
		}
	}
	swap(a[j-1],a[start]);
	return j-1;
}

void merge_sort(int a[],int start,int end){
	if(start<end){
		int z=pivot(a,start,end);
		merge_sort(a,start,z-1);
		merge_sort(a,z+1,end);
	}
}

int main()
{
	//freopen("input1.txt","r",stdin);
	//freopen("output1.txt","w",stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	merge_sort(a,0,n-1);
	for(int i=0;i<n;++i){
		cout<<a[i]<<' ';
	}
	return 0;
}
