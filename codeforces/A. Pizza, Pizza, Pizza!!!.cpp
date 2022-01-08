#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,q;
	cin>>n;
	if(n==0)
		cout<<0;
	else
	{
	    //double z=360/(n+1);
	    //double k=fmod(180.0,z);
	   // double m=k-z;
	    q=180%(360/(n+1));
        //cout<<z<<endl<<k<<endl<<m<<endl;
		//if(360%(n+1)==0&&(n+1)%2==0)
		if(q==0)
			cout<<(long long int)(n-(long long int)(n/2));
		else
			cout<<(long long int)(n+1);
	}
	return 0;
}
