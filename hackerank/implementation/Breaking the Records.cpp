#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int score[n+1];
    for(int i=0;i<n;++i)
    {
        cin>>score[i];
    }
      int m=0,z,k,c=0;
    for(int i=1;i<n;++i)
    {
        z=0,k=0;
        for(int j=0;j<i;++j)
        {
            if(score[i]<score[j])
                k+=1;
            else if(score[i]>score[j])
                z+=1;
        }
        if(k==i)
            m+=1;
        if(z==i)
            c+=1;
    }
    cout<<c<<' '<<m;
    return 0;
}
