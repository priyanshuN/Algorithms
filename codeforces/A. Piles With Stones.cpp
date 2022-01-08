#include <iostream>
using namespace std;
int main() 
{
	int n,z=0,k=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		z+=a[i];
	}
	for(int i=0;i<n;++i)
	{
		cin>>b[i];
		k+=b[i];
	}
	if(k>z)
		cout<<"No";
	else 
		cout<<"Yes";
	return 0;
}