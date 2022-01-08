#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,x;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>n>>k;
		int z=0,m=0;
		vector<int>a;
		vector<int>b;
		vector<int>c;
		for(int j=0;j<n;++j)
		{
			cin>>x;
			a.push_back(x);
			if(j%2==0)
			{
				b.push_back(x);
				m+=x;
			}
			else
			{
				c.push_back(x);
				z+=x;
			}
		}
		sort(b.begin(),b.end());
		sort(c.begin(),c.end());
		if(m<z)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			if(k==0)
				cout<<"NO"<<endl;
			else
			{
				int j,q=0;
				for(j=1;j<=k&&j<=c.size();++j)
				{
				    //cout<<c[0]<<endl;
				    //cout<<c.size()<<endl;
				   /* if(j>c.size());
				    {
				        cout<<"NO"<<endl;
				        break;
				    }*/
				    m=m-b[b.size()-j]+c[j-1];
				    z=z+b[b.size()-j]-c[j-1];
					//swap(b[b.size()-j],c[j-1]);
					//m=accumulate(b.begin(), b.end(), 0);
					//z=accumulate(c.begin(), c.end(), 0);
					if(m<z)
					{
						cout<<"YES"<<endl;
						q++;
						break;
					}
				}
				if(j==k+1||q==0)
					cout<<"NO"<<endl;
			}

		}
	}
	return 0;
}
