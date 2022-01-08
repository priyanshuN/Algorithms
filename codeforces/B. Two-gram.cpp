#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z,temp=0;
	cin>>n;
	char s[n+1];
	char a[2];
	for(int i=0;i<n;++i)
    {
        cin>>s[i];
    }
	for(int i=0;i<n-1;++i)
	{
	    z=0;
		for(int j=i;j<n-1;++j)
		{
			if(s[j]==s[i]&&s[j+1]==s[i+1])
			{
				z++;
			}
		}
		if(temp<z)
        {
            temp=z;
            a[0]=s[i];
            a[1]=s[i+1];
        }

	}
	cout<<a[0]<<a[1];
	return 0;
}
