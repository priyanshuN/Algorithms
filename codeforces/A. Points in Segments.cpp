#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1],b[n+1],c[m];
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
	}
	int z=0,x=0;
	for(int i=1;i<=m;++i)
	{
		int k=0;
		for(int j=0;j<n;++j)
		{
			if(i>=a[j] && i<=b[j])
			{
				k=1;
				z++;
				break;
			}
		}
		if(k==0)
            c[x++]=i;
	}
	cout<<m-z<<endl;;
	for(int i=0;i<x;++i)
	{
		cout<<c[i]<<' ';
	}
	return 0;
}
