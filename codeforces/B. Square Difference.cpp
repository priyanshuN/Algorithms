#include<bits/stdc++.h>
using namespace std;
bool is (long long int n)
{

    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (long long int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        long long int a,b,z;
        cin>>a>>b;
        z=a+b;
        if(a-b >1)
            cout<<"NO"<<endl;
        else
        {
           is(z)?cout<<"YES\n"  : cout<<"NO\n";
        }
    }
    return 0;
}
