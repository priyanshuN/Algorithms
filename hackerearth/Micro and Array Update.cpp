 #include <iostream>
 using namespace std;
 int main()
 {
     int i,j,x,n,temp,b,k;
     int a[100005];
     cin>>x;
     for(j=0;j<x;++j)
     {
         n=0;
         cin>>b;
         cin>>k;
         for(i=0;i<b;++i)
         {
             cin>>a[i];
         }
         temp=a[0];
         for(i=1;i<b;++i)
         {
             if(a[i]<temp)
             {
                temp=a[i];
             }
         }
         if(temp<k)
         {
              n=k-temp;
              cout<<n<<endl;
         }
         else
            cout<<"0"<<endl;
     }
     return 0;
 }
