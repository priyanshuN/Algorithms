#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int x,y,nodes,edges;
	cin>>nodes>>edges;
	for(int i=0;i<edges;++i){
		cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=0;i<nodes;++i){
		for(int j=0;j<v[i].size();++j){
			if (j==v[i].size()-1)
			{
				cout<<v[j]<<endl;
			}
			else{
				cout<<v[j]<<'=>'<<endl;
			}
		}
	}
	return 0;
}
