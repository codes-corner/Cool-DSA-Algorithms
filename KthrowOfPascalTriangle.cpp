vector<int> Solution::getRow(int k) {
    vector<int> v(k+1,0);
    v.push_back(1);
    int res=1;
    for(int i=0;i<k+1;i++){
        res*=(k-i);
        res/=(i+1);
        v.push_back(res);
    }
        return v;
    
}
