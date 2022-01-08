#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		int r,c;
		cin>>r>>c;
		int a[r][c];
		char ar[r][c];
		for(int j=0;j<r;++j)
		{
			for(int k=0;k<c;++k)
			{
			    string s1;
			    //cin>>s1;
			    cin>>ar[j][k];
			    s1[0]=ar[j][k];
				a[j][k]=stoi(s1);
			}
		}
		string s;
		cin>>s;
	}
}