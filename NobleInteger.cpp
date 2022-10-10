int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    unordered_map<int,int> m;
    for(int i=0;i<A.size();i++){
        m[A[i]] =i;
    }
    for(int i=0;i<A.size();i++){
        int x = m[A[i]];
        if(A[i]==A.size()-1-x)return 1;
    }
      
    
    return -1;
}
