 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1],s[n+1];
    for(int i=0;i<=n;++i)
    {
        cin>>a[i];
    }
    int q=a[n-1];
    b[0]=0;
    for(int i=1;i<=n;++i)
    {
        b[i]=0;
        for(int j=1;j<=i;++j)
        {
            int temp=a[j]+b[i-j];
            if(temp>=b[i])
            {
                b[i]=temp;
                s[i]=j;
            }
        }
        cout<<b[i]<<' '<<s[i]<<endl;
    }

    cout<<endl<<b[n];
    return 0;
}
