#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int k=0;
	for(int i=0;i<n-1;++i)
	{
		if(a[i]==a[i+1])
		{
			k=1;
			break;
		}
	}
	if(k==1)
		cout<<0;
    /*else if(x>a[n-1])
        cout<<-1;*/
	else
	{
		int z=0,z1=0;
		int l=a[0];
		int i=n-1;
		while(1)
		{
		    int h=a[i];
		    a[i]=h&x;
		    if(h==a[i]){
                z++;
                a[i]=-1;}
                //continue;}
            else if(a[i]==l)
                break;
			else if(binary_search(a,&(a[n-2]),a[i])){
				z++;
				z1=1;
				//cout<<"";
				break;
			}
			sort(a,a+n);
		}
		if(z1=0)
			cout<<-1;
        else
            cout<<z;
	}
	return 0;
}
