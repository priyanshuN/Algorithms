#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    long long int i,j,k=0,m=0,z;
    int n;
    cin >> n;
    long long int b[n*n];
    string a="abcdefghijklmnopqrstuvxyz";
        // your code goes here
        for(j=0;j<=a.size();++j)
        {
            z=1;
            for(i=0;i<s.size();++i)
            {
                if(a[j]==s[i])
                {
                    b[k]=(j+1)*z;
                    z++;
                    k++;
                }
                else
                {
                    z=1;
                }
            }
        }
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin>>x;
        for(int i=0;i<k;++i)
        {
            if(x==b[i]){
                cout<<"Yes"<<endl;
                m=1;
                break;}
            else
                m=0;
        }
        if(m==0)
                cout<<"No"<<endl;
    }
    return 0;
}

