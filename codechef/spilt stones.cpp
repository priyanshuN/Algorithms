#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		long int a,b,c,x,y,z,k;
		cin>>a>>b>>c>>x>>y;
		z=max(a,b);
		k=max(min(a,b),c);
		if((a+b+c)<(x+y))
			cout<<"NO"<<endl;
		else if((z+k)<max(x,y))
			cout<<"NO"<<endl;
		else if((a+b+c)==(x+y))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
