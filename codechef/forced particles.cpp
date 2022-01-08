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
		for(int m=0;m<s.size();++m)
		{
			if(s[m]=='L')
			{
				for(int n=0;n<r;++n)
				{
					//int z=count(&(a[n][0]),&(a[n][c-1]),1);
					int z=0;
					for(int j=0;j<c;++j)
                    {
                        if(a[n][j]==1){
                            z++;
                            a[n][j]=0;}
                    }
					for(int x=0;x<z;++x)
					{
						a[n][x]=1;
					}
				}
			}
			else if(s[m]=='R')
			{
				for(int n=0;n<r;++n)
				{
					//int z=count(&(a[n][0]),&(a[n][c-1]),1);
					int z=0;
					for(int j=0;j<c;++j)
                    {
                        if(a[n][j]==1){
                            z++;
                            a[n][j]=0;}
                    }
					for(int x=c-1;x>=c-z;--x)
					{
						a[n][x]=1;
					}
				}
			}
			else if(s[m]=='U')
			{
				for(int n=0;n<c;++n)
				{
					//int z=count(&(a[0][n]),&(a[r-1][n]),1);
					int z=0;
					for(int j=0;j<r;++j)
                    {
                        if(a[j][n]==1){
                            z++;
                            a[j][n]=0;}
                    }
					for(int x=0;x<z;++x)
					{
						a[x][n]=1;
					}
				}
			}
			else if(s[m]=='D')
			{
				for(int n=0;n<c;++n)
				{
					//int z=count(&(a[0][n]),&(a[r-1][n]),1);
					int z=0;
					for(int j=0;j<r;++j)
                    {
                        if(a[j][n]==1){
                            z++;
                            a[j][n]=0;}
                    }
					for(int x=r-1;x>=r-z;--x)
					{
						a[x][n]=1;
					}
				}
			}
		}
		for(int j=0;j<r;++j)
		{
			for(int k=0;k<c;++k)
			{
				cout<<a[j][k];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
