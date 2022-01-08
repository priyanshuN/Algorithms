#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long int m,z=0,k=0;
	cin>>n>>m;
	long int a[n],b[n],c[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		z+=a[i];
		k+=b[i];
		c[i]=a[i]-b[i];
	}
	if(z<=m)
		cout<<0;
	else if(z>m&&k>m)
		cout<<-1;
	else
	{
		sort(c,c+n);
		int x=lower_bound(a,a+n,(z-m))-a;
		cout<<x+1;
	}
	return 0;
}