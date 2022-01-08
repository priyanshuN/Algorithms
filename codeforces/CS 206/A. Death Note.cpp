#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int z=0;
	fro(int i=0;i<n;++i)
	{
		if(z>a[i])
		{
			
		}
		else
		{
			int k=(a[i]-z)/m;
			z=(a[i]-z)%m;
		}
	}
}