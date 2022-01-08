#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;	
	else if(a>b)
		return (b,a%b);
	else 
		return(a,b%a);
}

int main()
{
	int n;
	vector<int>a;
	cin>>n;
	int b[n+1];
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		v.push_back(x);
		cin>>b[i];
	}
}