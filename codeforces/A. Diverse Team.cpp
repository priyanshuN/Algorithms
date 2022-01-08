#include<bits/stdc++.h>
using namespace std;

int find1(int a[],int x,int n)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]==x)
            return i;
    }
}
int main()
{
	int n,k;
	cin>>n>>k;
	int d[n+1];
	vector<int> a;
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		a.push_back(x);
		d[i]=x;
	}
	sort(a.begin(),a.end());
	int b[n+1],c[n+1];
	b[0]=a[0];
	int m=0,m1=0;
	c[0]=find1(d,a[0],n);
	for(int i=0;i<n;++i)
	{
		if(b[m]!=a[i])
		{
			b[++m]=a[i];
			//cout<<m<<' '<<b[m]<<endl;
			c[++m1]=find1(d,a[i],n);
			//cout<<m1<<' '<<c[m1]<<endl;
		}
	}
	if(m+1<k)
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		for(int i=0;i<k;++i)
		{
			cout<<c[i]+1<<' ';
		}
	}
	return 0;
}
