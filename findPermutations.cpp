vector<int> Solution::findPerm(const string A, int B) {
    vector<int> v;
    int left =1;
    int right = B;
    for(int i=0;i<A.size();i++){
        if(A[i]=='D'){
            v.push_back(right);
            right--;
        }
        else if(A[i]=='I'){
            v.push_back(left);
            left++;
        }
    }
    // if(A[A.size()-1]=='D')
    // v.push_back(right);
    // else v.push_back(left);
    v.push_back(right);
    
    return v;
}
