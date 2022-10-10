
int multiply(int x,int res[],int sz){
    int carry =0;
    for(int i=0;i<sz;i++){
        int prod = res[i]*x+carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        res[sz] = carry%10;
        carry = carry/10;
        sz++;
    }
    return sz;
}

string Solution::solve(int A) {
    
    int res[500];
    res[0] =1;
    int sz = 1;
    for(int i=2;i<=A;i++){
        sz= multiply(i,res,sz);
    }
    string s="";
    for(int i=sz-1;i>=0;i--){
        s+=res[i]+'0';
    }
    return s;
}
