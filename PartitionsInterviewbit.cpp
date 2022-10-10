int Solution::solve(int A, vector<int> &B) {
    int total =0;
   for(auto x:B)total+=x;
    if(total%3!=0)return 0;
    
    
    int cnt2by3 = 0;
    int cntby3 = 0;
    int sum =0;
    for(int i=0;i<B.size()-1;i++){
        sum+=B[i];
        if(sum == 2*total/3){
            cnt2by3+=cntby3;
        }
        if(sum==total/3)cntby3++;
    }
    return cnt2by3;
    
}
