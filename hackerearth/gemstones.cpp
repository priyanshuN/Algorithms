#include <bits/stdc++.h>

using namespace std;

int gemstones(vector <string> arr,int n){
    // Complete this function
    string s="abcdefghijklmnopqrstuvwxyz";
    int i,j,k,m=0,x;
    for(j=0;j<s.size();++j)
    {
        x=0;
        for(k=0;k<n;++k)
        {
            for(i=0;i<arr[k].size();++i)
            {
                if(s[j]==arr[k][i])
                {
                    x+=1;
                    break;
                }
            }
        }
       if(x==n)
            m+=1;
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = gemstones(arr,n);
    cout << result << endl;
    return 0;
}
