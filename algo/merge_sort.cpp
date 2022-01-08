#include<bits/stdc++.h>
using namespace std;

void mergesort(int a[],int l,int m,int r)
{
    int l1=l;
    int m1=m;
	int k=l;
	int b[r+1];
	while(k<=r)
	{
		if(l1>m1)
		{
			while(m1+1<=r)
			{
				b[k++]=a[m1+1];
				m1++;
			}
		}
		if(m1+1>r)
		{
			while(l1<=m1)
			{
				b[k++]=a[l1++];
			}
		}
		if(a[l1]<a[m1+1])
			b[k++]=a[l1++];
		else if(a[l1]>=a[m1+1])
		{
			b[k++]=a[m1+1];
			m1++;
		}
	}
	for(int i=l;i<=r;++i)
	{
		a[i]=b[i];
	}
}

void merge(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		merge(a,l,m);
		merge(a,m+1,r);
		mergesort(a,l,m,r);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;++i)
		cout<<a[i]<<' ';
	merge(a,0,n-1);
	cout<<endl;
	for(int i=0;i<n;++i)
		cout<<a[i]<<' ';
	return 0;
}
