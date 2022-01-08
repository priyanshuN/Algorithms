#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		int n,x,y;
		cin>>n>>x>>y;
		int a[n+1];
		int  z=0,k=0;
		for(int j=0;j<n;++j)
		{
			cin>>a[j];
			if(a[j]==x)
				z++;
			if(a[j]==y)
				k++;
		}
		cout<<z<<k<<endl;
		double q,m;
		q=z/n;
		m=(k/n);
		//q=.5*.5;
		cout<<q<<endl<<m<<endl;
	}
	return 0;
}
