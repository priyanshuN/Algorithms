string Solution::minWindow(string A, string B) {
    int n=A.size();
    int b=B.size();
    unordered_map<char,int>m;
    for(int i=0;i<b;++i){
        m[B[i]]++;
    }
    unordered_map<char,int>h;
    int l=b,temp=n+1,i=0,j=0;
    string s="";
    while(i<=j && j<n){
        if(m.find(A[j])!=m.end()){
            if(h.find(A[j])==h.end() || h[A[j]]<m[A[j]]){
                l--;
            }
        }
        h[A[j]]++;
        if(l==0){
            while(i<=j && h[A[i]]>m[A[i]]){
                h[A[i]]--;
                i++;
            }
            if(temp>j-i+1){
                temp=j-i+1;
                s=A.substr(i,temp);
            }
        }
        j++;
    }
    return s;
}