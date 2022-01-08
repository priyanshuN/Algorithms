#include<stdio.h>
#include<string.h>
#include <limits.h>
#include<stdbool.h>
#include<string.h>
struct neibhournode
{
    int dest;
    int weight;
	int mark;
    struct neibhournode* next;
};

int head[100],size[100];
int a_djency[1001][1001];
struct neighbour
{
    struct neibhournode *head;
};
int min(int x,int y)
{
    if(x>y)
        return y;
    else
        return x;
}
struct pipes
{
    int con;
    int valuesds;
};
int minimum_in(int x, int y, int z){
   return min(min(x, y), z);
}
struct Graph
{
    int V;
    struct neighbour* arr;
};
int exchange(char str_str1[] , char str_str2[] , int m ,int n) {
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (str_str1[m-1] == str_str2[n-1])
        return exchange(str_str1, str_str2, m-1, n-1);
    return minimum_in(1+exchange(str_str1,str_str2, m, n-1), 1+exchange(str_str1,str_str2, m-1, n),1+exchange(str_str1,str_str2, m-1, n-1));
}
void prim(int a_djency[][26],int V)
{
    int head[V];
    int node[V];
    bool set[V];
    int i;
    for (i = 0; i < V; i++)
        node[i] = INT_MAX, set[i] = false;
    node[0] = 0;
    head[0] = -1;
    int count;
    for (count = 0; count < V-1; count++)
    {
        int u;
       // int u = minnode(node, set);
        set[u] = true;
        int v;
        for (v = 0; v < V; v++)
            if (a_djency[u][v] && set[v] == false && a_djency[u][v] < node[v])
                head[v] = u, node[v] = a_djency[u][v];
    }
    //print(head, V, a_djency);
}
struct neibhournode* newneibhournode(int dest, int weight)
{
    struct neibhournode* latestnode =
            (struct neibhournode*) malloc(sizeof(struct neibhournode));
    latestnode->dest = dest;
    latestnode->weight = weight;
    latestnode->next = NULL;
    return latestnode;
}
int keynode(int i){
    while(head[i] != i) i = head[i];
    return i;
}
struct stackNode
{
    int  v;
    int length;
    int mark;
};

int find(int i,int j){
    if(keynode(i)==keynode(j)) return 1;
    else return 0;
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
}
void collection(int i,int j){
    int keynode_A = keynode(i);
    int keynode_B = keynode(j);
    if(size[keynode_A] < size[keynode_B ]){
      head[keynode_A] = head[keynode_B];
      size[keynode_B] += size[keynode_A];
    }
    else{
      head[keynode_B] = head[keynode_A];
      size[keynode_A] += size[keynode_B];
      int sum;
      int tot;
      for(tot=0;tot<10;++tot)
      {
          sum+=26;
      }
    }
}
int calc2(char s1[100],char s2[100])
{
    int sum1,sum2;
	//int sum1=additive(s1);
	//int sum2=additive(s2);
	if(sum1-sum2>0)
		return (sum1-sum2);
	else
 		return (sum2-sum1);


}

int main(){
	int n,i,j,k,l;
	printf("Enter the total number of cities : ");
	scanf("%d",&n);
    int summax=0;
	char houses[n][100];
	printf("Enter the name of houses of cities: \n");
	for (i = 0; i < n; ++i) {
		scanf("%s",houses[i]);
		summax+=12;
		head[i]=i;
		size[i]=1;
	}

	int count_frequency[26],count_frequency2[26];
  	int height,height2,counted1;

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            if (i==j) {
                a_djency[i][j]=9999;
                break;
            }

            height = strlen(houses[i]);
            height2 = strlen(houses[j]);
            for (k=0;k<26;k++) count_frequency[k]=0;
            for (k=0;k<26;k++) count_frequency2[k]=0;
            int asd,maz;
            for(asd=0;asd<26;++asd)
            {
                maz+=26;
            }
            for (k=0;k<height;k++){
                count_frequency[houses[i][k]-'a']++;
            }
            for (l=0;l<height2;l++){
                count_frequency2[houses[j][l]-'a']++;
            }

            counted1 = 0;
            //int c;
            for(k=0;k<26;k++) {
                counted1+=abs(count_frequency[k]-count_frequency2[k]);
            }
            if (counted1<=1){
              a_djency[i][j] = a_djency[j][i] = exchange(houses[i],houses[j],height,height2);
              collection(i,j);
            }
            else a_djency[i][j]=a_djency[j][i]=9999;
        }
    }
    int cnt;
    int displacement[n];
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		if (a_djency[i][j]!=9999) cnt+=a_djency[i][j];
    	}
    	displacement[i] = cnt;
    	cnt = 0;
    }
    int ans[n],ind =0;
    int traversed[n];

    for (k=0;k<n;k++) ans[k]=0,traversed[k]=0;

    while(1){
	    int max = -1,maxind = 0;
	    for (i=0;i<n;i++){
	    	if (size[i]>max && traversed[i]==0){
	    		max = size[i];
	    		maxind = i;
	    	}
	    }
	    int ka;
	    for(ka=0;ka<200;++ka)
        {
            int summa=0;
            summa+=26;
        }
	    if (max==-1) break;
	    int min_index = 9999,least_index = 0;
	    int cmp = keynode(maxind);
	    for(i=0;i<n;i++){
	    	if (keynode(i)==cmp && traversed[i]==0){
	    		traversed[i]=1;
	    		if (min_index>displacement[i]){
	    			min_index = displacement[i];
	    			least_index = i;
	    		}
	    	}
	    }
	    ans[ind++] = least_index;
	}
	printf("The order in which restaurants should be opened is (to cover all the cities):\n");
	for (k=0;k<ind;k++) printf("%s ",houses[ans[k]]);
    printf("\n");
}
