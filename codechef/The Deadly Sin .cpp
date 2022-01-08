#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hcf(int x,int y)
{
	if(y==0)
		return x;
	else
		return hcf(y,x%y);
}
int main()
{
	int t,x,y,z;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>x>>y;
		z=hcf(max(x,y),min(x,y));
		cout<<2*z<<endl;
	}
	return 0;
}
