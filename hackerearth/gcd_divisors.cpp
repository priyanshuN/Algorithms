#include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE = 5000005;
vector<long long>isprime(MAX_SIZE,true);
vector<long long>prime;
vector<long long>S(MAX_SIZE);
void prime_check(int n){
    isprime[0]=isprime[1]=false;
    for(long long int i=2;i<n;++i){
        if(isprime[i]){
            prime.push_back(i);
            S[i]=i;
        }
        for(long long int j=0;j<(int)prime.size() && i*prime[j]<n && prime[j]<=S[i];++j){
            isprime[i*prime[j]]=false;
            S[i*prime[j]]=prime[j];
        }
    }
}
/*int find(int n){
    int div[n+1];
    memset(div,0,sizeof(div));
    for(int i=1;i<=n;++i){
        for(int j=1;j*i<=n;j++){
            div[i*j]++;
        }
    }
    int ct=0;
    for(int i=0;i<=n;++i){
        ct+=div[i];
    }
    return ct;
}*/
/*int count(int n){
    int c=0;
    for(int i=1;i<=sqrt(n);++i){
        if(n%i==0){
            if(n/i==1){
                c++;
            }
            else{
                c+=2;
            }
        }
    }
    return c;
}*/

/*bool isprime(int n){
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2 == 0 || n%3 == 0)
        return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}*/
void sieve(int n,bool prime1[],bool primesq[],int a[]){
    for(int i=2;i<=n;++i)
        prime1[i]=true;
    for(int i=0;i<=(n*n+1);++i){
        primesq[i]=false;
    }
    prime1[1]=false;
    for(int p=2;p*p<=n;++p){
        if(prime1[p]==true){
            for(int i=p*2;i<=n;i+=p){
                prime1[i]=false;
            }
        }
    }
    int j=0;
    for(int p=2;p<=n;++p){
        if(prime1[p]){
            a[j]=p;
            primesq[p*p]=true;
            j++;
        }
    }
}
int count_div(int n){
    if(n==1){
        return 1;
    }
    bool prime1[n+1],primesq[n*n+1];
    int a[n];
    sieve(n,prime1,primesq,a);
    int ans=1;
    for(int i=0;;++i){
        if(a[i]*a[i]*a[i]>n){
            break;
        }
        int c=1;
        while(n%a[i]==0){
            n=n/a[i];
            c++;
        }
        ans*=2;
    }
    if(prime1[n])
    {
        ans=ans*2;
    }
    else if(primesq[n]){
        ans*=3;
    }
    else if(n!=1){
        ans*=4;
    }
    return ans;
}
int main(){
    prime_check(5000002);
    int t;
    cin>>t;
    for(int g=0;g<t;++g){
        int l,r;
        int tot=0;
        cin>>l>>r;
        int div[r+1];
        memset(div,0,sizeof(div));
        for(int i=1;i<=r;++i){
            for(int j=1;j*i<=r;j++){
                div[i*j]++;
            }
        }
        for(int i=l;i<=r;++i){
            if(isprime[div[i]])
                tot++;
        }
        printf("%d\n",tot);
    }
    return 0;
}