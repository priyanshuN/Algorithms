
#include <bits/stdc++.h>

using namespace std;


double d[600][600];

int co[600][600];

typedef pair<double, int> PII;

 vector<pair<double,int>>adj[600];

int marked[600];





double prim(int x)

{


    priority_queue<PII, vector<PII>, greater<PII> > Q;


    int y;


    double minimumCost = 0;


    PII p;


    Q.push(make_pair(0, x));


    while(!Q.empty())

{


        // Select the edge with minimum weight


        p = Q.top();


        Q.pop();


        x = p.second;


        // Checking for cycle


        if(marked[x] == 1)


            continue;


        marked[x] = 1;


        if(p.first-1!=0)


            minimumCost += p.first;




        for(int i = 0;i < adj[x].size();++i)


        {




            y = adj[x][i].second;


            if(marked[y] == 0)


                Q.push(adj[x][i]);


        }

}


    return minimumCost;

}







int main(){

 int t;

 cin>>t;

 for(int i=0;i<t;++i){

  vector<pair<int,int>>v;


   int n;

   cin>>n;

   double tot=0;

   for(int j=0;j<n;++j){

     int x,y;

     cin>>x>>y;

     v.push_back(make_pair(x,y));

   }

   for(int j=0;j<=n;++j){

     for(int k=0;k<=n;++k){

       d[j][k]=0;

       co[j][k]=0;

     }

   }

   for(int j=0;j<=n;++j){

     marked[j]=0;

   }

   for(int j=0;j<n;++j){

     for(int k=0;k<n;++k){

       //if(k!=j && d[j][k]==0){

         double z=sqrt(((v[j].first-v[k].first)*(v[j].first-v[k].first))+((v[j].second-v[k].second)*(v[j].second-v[k].second)));



         d[j+1][k+1]=z;

         d[k+1][j+1]=z;

         if(z-1==0){

           co[j+1][k+1]=1;

           co[k+1][j+1]=1;

         }

         adj[j+1].push_back(make_pair(z,k+1));

         adj[k+1].push_back(make_pair(z,j+1));

       //}



     }

   }

   /*for(int j=0;j<n;++j){

     for(int k=0;k<n;++k){

       cout<<d[j+1][k+1]<<' ';

     }

     cout<<endl;

   }*/

   /*for(int j=0;j<n;++j){

     for(int k=0;k<n;++k){

       cout<<co[j+1][k+1]<<' ';

     }

     cout<<endl;

   }*/

   tot = prim(1);
   for(int k=0;k<=n;++k){
         adj[k].clear();
         adj[k].clear();
    }

   printf("%.6f\n",tot);

 }

 return 0;

}

