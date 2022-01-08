#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        long long int n,m,x,y;
        cin>>n>>m>>x>>y;
        /*long long int l=(n-1)%x;
        long long int z=(m-1)%y;
        if(n==2&&m==2)
            cout<<"Chefirnemo"<<endl;
        else if(l==0&&z==0)
            cout<<"Chefirnemo"<<endl;
        else if(l==1&&z==1)
            cout<<"Chefirnemo"<<endl;
        else if(l==x-1&& z==y-1)
            cout<<"Chefirnemo"<<endl;
        else
        {
            cout<<"Pofik"<<endl;
        }*/
        if(n==1&&m==1)
            cout<<"Chefirnemo"<<endl;
        else if((n-1)%x==0&&(m-1)%y==0)
            cout<<"Chefirnemo"<<endl;
        else if(n>1&&m>1)
        {
            if((n-2)%x==0&&(m-2)%y==0)
                cout<<"Chefirnemo"<<endl;
            else
                cout<<"Pofik"<<endl;
        }
        else
            cout<<"Pofik"<<endl;
    }
    return 0;
}
