string Solution::largestNumber(const vector<int> &A) {
    
    vector<string> v;

  int n=A.size();

  for(int i=0;i<n;i++){

    v.push_back(to_string(A[i]));

  }

 sort(v.begin(),v.end(),[&](string a,string b){

     return a+b > b+a;

 });

 string res="";

 for(int i=0;i<n;i++){

   res+=v[i];

 }

 if(v[0]=="0")

   return "0";

   

 return res;
}

