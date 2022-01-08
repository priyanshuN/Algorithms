#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string m,a
    for(i=0;i<n;++i)
    {
        cin>>d>>m>>y;
        if(m=="January")
        {
            if(d==1)
                cout<<31<<' '<<"December"<<' '<<y-1;
            else
                cout<<d-1<<' '<<m<<' '<<y;
        }
        else if(m=="March")
        {
            if(y%4==0&&d==1)
                cout<<29<<' '<<"February"<<' '<<y;
            else if(y%4!=0&&d=1)
                cout<<28<<' '<<"February"<<' '<<y;
            else
                cout<<d-1<<' '<<m<<' '<<y;
        }
        else if(m=="April"||m=="June"||m=="September"||m=="Novemember"&&d==1)
             cout<<31<<' '<<"March"<<' '<<y;
        else if(m=="")


    }
    return 0;
}
