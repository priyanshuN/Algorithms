#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>n;
        vector<int>a;
		for(int j=0;j<n;++j)
		{
			int x;
			cin>>x;
			a.push_back(x);
		}
		if(a.size()==1)
        {
            cout<<2*a[0]<<endl;
        }
        else
        {
            int z=(2*a[0])^(2*a[1]);
            for(int j=2;j<n;++j)
            {
                z=z^(2*a[j]);
            }
             cout<<z<<endl;
        }

	}
	return 0;
}
