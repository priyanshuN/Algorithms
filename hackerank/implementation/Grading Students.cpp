#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,grades;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>grades;
        if(grades>=38)
        {
            if((grades+1)%5==0)
            {
                grades+=1;
                cout<< grades<<endl;
            }
            else if((grades+2)%5==0)
            {
                grades+=2;
                cout<< grades<<endl;
            }
            else
                cout<< grades<<endl;
        }
        else
            cout<< grades<<endl;
    }
    return 0;
}
