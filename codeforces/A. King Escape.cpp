#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1,a2,b1,b2,c1,c2;
    cin>>b1>>b2>>a1>>a2>>c1>>c2;
    if(((a1>b1&&c1>b1)||(a1<b1&&c1<b1))&&((a2>b2&&c2>b2)||(a2<b2&&c2<b2)))
    {
        /*int h=((a2-b2)-(a1-b1))*((c2-b2)-(c1-b1));
        int z=((a2-b2)+(a1-b1))*((c2-b2)+(c1-b1));
       if(h>0&&z>0)
        cout<<"YES";
       else
        cout<<"NO";*/
        cout<<"YES";
     }
    else
        cout<<"NO";
    return 0;
}
