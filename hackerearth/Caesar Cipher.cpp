#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k,int n) {
    // Complete this function
    int  i;
    for(int i=0;i<n;++i)
    {
        if(s[i]<=90&&s[i]>=65)
        {
            int z=k-90+s[i];
            int x=64+z%26;
            if(z>=0)
               {
                   s[i]=x;
               }
            else
                s[i]+=k;
        }
        if(s[i]>=97&&s[i]<=122)
        {
            int z=k-122+s[i];
             int c=96+z%26;
            if(z>=0)
               {
                   s[i]=c;
               }
            else
                s[i]+=k;
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = caesarCipher(s, k,n);
    cout << result << endl;
    return 0;
}

