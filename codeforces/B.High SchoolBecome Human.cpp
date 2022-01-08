#include<bits/stdc++.h>
using namespace std;
long long int b(long long int x,long int n)
{
	if(n==0)
		return 1;
	else if(n%2==0)
		return b(x*x,n/2);
	else
		return b(x*x,(n-1)/2);
}
int main()
{
	long int x,y;
	cin>>x>>y;
	double  z,k;
	z=y*log10(x);
	k=x*log10(y);
	if(z-k>0)
		cout<<">";
	else if(z-k<0)
		cout<<"<";
	else if(z-k==0)
		cout<<"=";
	return 0;
}
