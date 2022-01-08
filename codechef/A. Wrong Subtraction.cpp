#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,x;
	cin>>n>>x;
	for(int i=0;i<x;++i)
	{
		if(n%10!=0)
		{
			n=n-1;
		}
		else
			n=n/10;
	}
	cout<<n;
	return 0;
}
