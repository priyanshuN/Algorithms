#include<bits/stdc++.h>
using namespace std;
void merge(long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    long int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeS(long int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeS(arr, l, m);
        mergeS(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
	long int n,z,k;
	cin>>n>>k;
	long int a[n+1];
	for(int i=0;i<n;++i)
	{
		/*long int x;
		cin>>x;
		a.push_back(x);*/
		cin>>a[i];
	}
	//sort(a.begin(),a.end());
	mergeS(a,0,n-1);
	//cout<<a[0];
	if(k>n)
		cout<<-1;
    else if(k==0)
        if(a[0]!=1)
        cout<<a[0]-1;
    else
        cout<<-1;
	else if(k==n)
	{
		//if(a[k-1]>=a[k-2])
		//{
			cout<<a[k-1];
		//}
		/*else
		{
			cout<<-1;
		}*/
	}
	else
    {
		if(a[k-1]<a[k])
		{
			cout<<a[k-1];
		}
		else if(a[k-1]==a[k])
		{
			cout<<-1;
		}
		else
        {
            cout<<a[k];
        }
	}
	return 0;
}
