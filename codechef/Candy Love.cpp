#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,z;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		z=0;
		cin>>n;
		int a[n+1];
		for(int j=0;j<n;++j)
		{
			cin>>a[j];
			z+=a[j];
		}
		if(z%2!=0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}