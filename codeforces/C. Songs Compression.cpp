#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	long long int m,z=0,k=0,v=0;
	cin>>n>>m;
	long int a[n],b[n],c[n];
	for(long int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		z+=a[i];
		k+=b[i];
		c[i]=a[i]-b[i];
	}
	if(z<=m)
		cout<<0;
	else if(k>m)
		cout<<-1;
    else if(n==1)
        cout<<1;
	else
	{
		sort(c,c+n);
		reverse(c,c+n);
        for(long int i=0;i<n;++i)
        {
        	z=z-c[i];
        	if(z<=m)
        	{
        		cout<<i+1;
        		break;
        	}
        }
	}
	return 0;
}
