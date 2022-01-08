#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp,i;
    cin>>a>>b>>c;
    int p[10];
    p[0]=a+b*c;
    p[1]=a*(b+c);
    p[2]=a*b*c;
    p[3]=(a+b)*c;
    p[4]=a+b+c;
    p[5]=(a+b)*c;
    temp=p[0];
    for(i=1;i<6;++i)
    {
        if(temp<p[i])
        {
            temp=p[i];
        }
    }
    cout<<temp;
    return 0;
}
