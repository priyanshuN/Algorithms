#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	//sort(a.begin(),a.end());
	//a.erase(unique(a.begin(),a.end()),a.end());
	for(int i=a.size()-1;i>=0;--i)
    {
        for(int j=i-1;j>=0;--j)
        {
            if(a[i]==a[j])
            {
                int x=a[j];
                a.erase(a.begin()+j);
                i--;
            }
        }
    }
    cout<<a.size()<<endl;
	for(int i=0;i<a.size();++i)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}
