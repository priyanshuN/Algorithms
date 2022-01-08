#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0,z=0,m=0;
	cin>>n;
	int a[n+1],b[n+1];
	vector <int>a_1,b_1,c_1;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;++i)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;++i)
	{
		if(b[i]==3)
		{
			k=1;
			a_1.push_back(a[i]);
		}
	}
	sort(a_1.begin(),a_1.end());
	for(int i=0;i<n;++i)
	{
		if(b[i]==2)
		{
			z=1;
			b_1.push_back(a[i]);
		}
	}
	sort(b_1.begin(),b_1.end());
	for(int i=0;i<n;++i)
	{
		if(b[i]==1)
		{
			m=1;
			c_1.push_back(a[i]);
		}
	}
	sort(c_1.begin(),c_1.end());
	if(z==0||m==0)
	{
		cout<<a_1[0];
	}
	else if(k==0)
	{
		cout<<b_1[0]+c_1[0];
	}
	else
	{
		if(a_1[0]<b_1[0]+c_1[0])
			cout<<a_1[0];
		else
			cout<<b_1[0]+c_1[0];
	}
	return 0;
}
