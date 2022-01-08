#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>n;
		int a[n+1][n+1];
		for(int k=0;k<n;++k)
			for(int j=0;j<n;++j)
				cin>>a[k][j];
		int z,m,w=0,q;
		for(int k=1;k<=n;k++)
		{
			z=0;m=0;
			for(int j=n-k;j<n;++j)
			{
				z+=a[j-n+k][j];
				m+=a[j][j-n+k];
			}
			if(m>z)
				q=m;
			else
				q=z;
			if(w<q)
				w=q;
		}
		cout<<w<<endl;
	}
	return 0;
}
