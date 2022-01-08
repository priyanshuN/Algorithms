#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n;
        cin>>n;
        vector<double>a;
        for(int j=0;j<n;++j)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        while(a.size()>1)
        {
            a[a.size()-2]=(a[a.size()-1]+a[a.size()-2])/2;
            //int l=a.size()-1;
            a.pop_back();
        }
        printf("%.7lf\n",a[a.size()-1]);
    }
    return 0;
}
