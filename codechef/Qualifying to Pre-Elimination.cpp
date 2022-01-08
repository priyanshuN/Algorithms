#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int z=0;
        for(int j=0;j<n;++j)
        {
            cin>>a[j];
        }
        sort(a,a+n, greater<int>());
        /*for(int j=0;j<n;++j)
            cout<<a[j];*/
         /*if(k>a[n-1])
            cout<<0<<endl;
        else if(k<a[0])
            cout<<n<<endl;
        else
        {
            for(int j=k;j<n;++j)
            {
                if(a[j]<a[k-1])
                    break;
                else
                    z++;
            }
            cout<<z<<endl;
        }*/
        for(int j=k;j<n;++j)
        {
            if(a[j]<a[k-1])
                break;
            else
                z++;
        }
        cout<<z+k<<endl;
    }
    return 0;
}
