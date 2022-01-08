#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    cin>>a;
    if(a[0]<=123&&a[0]>=97)
        a[0]-=32;
    cout<<a;
}
