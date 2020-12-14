#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pii pair<int,pi>
#define IMA INT_MAX
#define IMI INT_MIN
#define pl pair<ll,ll>
#define pll pair<ll,pl>
#define ff first
#define mp make_pair
#define mod 1000000007
#define ss second
#define pb push_back
#define fr(i,s,n) for(int i=s;i<n;++i)

const int N=1<<17;
const int T_size = (N<<2);

struct tree_node{
    int cnt[26];
    tree_node(){
        memset(cnt,0,sizeof(cnt));
    }
};

tree_node tree[T_size];
int lazy[T_size];
int pow2[N];
int prefix[26],suffix[26],odd[26],even[26];
string str;

int count(tree_node a){
    int ans=1,curr;
    fr(i,0,26){
        if(a.cnt[i]==0)odd[i]=0,even[i]=1;
        else odd[i]=pow2[a.cnt[i]-1],even[i]=pow2[a.cnt[i]-1];
    }
    prefix[0]=even[0];
    fr(i,1,26){
        prefix[i]=(prefix[i-1]*1ll*even[i])%mod;
    }
    suffix[25]=even[25];
    for(int i=24;i>=0;--i){
        suffix[i]=(suffix[i+1]*1ll*even[i])%mod;
    }
    fr(i,0,26)ans=(ans*1ll*even[i])%mod;
    fr(i,0,26){
        curr=(((i==0)?1:prefix[i-1])*1ll*((i==25)?1:suffix[i+1]))%mod;
        curr=(curr*1ll*odd[i])%mod;
        ans=(ans+curr)%mod;
    }
    return (ans-1 + mod)%mod;
}

tree_node merge(tree_node a,tree_node b){
    tree_node ans;
    fr(i,0,26){
        ans.cnt[i]=a.cnt[i]+b.cnt[i];
    }
    return ans;
}

tree_node rotate(tree_node a,int b){
    tree_node ans;
    fr(i,0,26){
        ans.cnt[i]=a.cnt[(i-b+26)%26];
    }
    return ans;
}

void build_tree(int s,int e,int i){
    if(s>e)return;
    if(s==e){
        tree[i].cnt[str[s-1]-'a']=1;
        return;
    }
    // int mid=(s+e)/2;
    build_tree(s,(s+e)>>1,i<<1);
    build_tree(((s+e)>>1)+1,e,(i<<1)|1);
    tree[i]=merge(tree[i<<1],tree[(i<<1)|1]);
}

void update_tree(int s,int e,int l,int r,int val,int i){
    if(lazy[i]){
        tree[i]=rotate(tree[i],lazy[i]);
        if(s!=e){
            lazy[i<<1]=(lazy[i<<1]+lazy[i])%26;
            lazy[(i<<1)|1]=(lazy[(i<<1)|1]+lazy[i])%26;
        }
        lazy[i]=0;
    }
    if(s>e || s>r || e<l)return;
    if(l<=s && e<=r){
        tree[i]=rotate(tree[i],val);
        if(s!=e){
            lazy[i<<1]=(lazy[i<<1]+val)%26;
            lazy[(i<<1)|1]=(lazy[(i<<1)|1]+val)%26;
            return;
        }
    }
    update_tree(s,(s+e)>>1,l,r,val,i<<1);
    update_tree(((s+e)>>1)+1,e,l,r,val,(i<<1)|1);
    tree[i]=merge(tree[i<<1],tree[(i<<1)|1]);
}

tree_node query(int s,int e,int l,int r,int i){
    if(s>e || s>r || e<l)return tree_node();
     if(lazy[i]){
        tree[i]=rotate(tree[i],lazy[i]);
        if(s!=e){
            lazy[i<<1]=(lazy[i<<1]+lazy[i])%26;
            lazy[(i<<1)|1]=(lazy[(i<<1)|1]+lazy[i])%26;
        }
        lazy[i]=0;
    }
    if(l<=s && e<=r)return tree[i];
    return merge(query(s,(s+e)>>1,l,r,i<<1),query(((s+e)>>1)+1,e,l,r,(i<<1)|1));
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/BSEB/Documents/Algorithms/output/input.txt", "r", stdin);
    freopen("C:/Users/BSEB/Documents/Algorithms/output/output.txt", "w", stdout);
    #endif
    int n,x,y,z,q;
    cin>>n>>q;
    cin>>str;

    pow2[0]=1;
    fr(i,1,N){
        pow2[i]=(pow2[i-1]<<1)%mod;
    }

    build_tree(1,n,1);
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            cin>>x>>y>>z;
            ++x;
            ++y;
            update_tree(1,n,x,y,z%26,1);
        }
        else{
            cin>>x>>y;
            ++x;
            ++y;
            tree_node curr=query(1,n,x,y,1);
            cout<<count(curr)<<endl;
        }
    }
	return 0;
} 