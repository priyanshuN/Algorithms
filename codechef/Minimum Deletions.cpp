#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else if(a>b)
		return gcd(b,a%b);
	else
		return gcd(a,b%a);
}

int main()
{
	int t,n,x;
	cin>>t;
	for(int j=0;j<t;++j)
	{
		vector<int>a;
		cin>>n;
		for(int i=0;i<n;++i)
		{
			cin>>x;
			a.push_back(x);
		}
		int k=a[0];
		int i;
		for(i=1;i<n;++i)
		{
			k=gcd(k,a[i]);
			if(k==1)
			{
				cout<<0<<endl;
				break;
			}
		}
		if(i==n)
            cout<<-1<<endl;
	}
return 0;
}
