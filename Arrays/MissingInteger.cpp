int Solution::firstMissingPositive(vector<int> &A) {
    int beg=0;
    int st=1;
    for(int i=0;i<A.size();i++){
        if(A[i]>0&&A[i]<=A.size()) {
            if(A[i]==A[A[i]-1]) continue;
            swap(A[i],A[A[i]-1]);
            i--;
        }

    }
    for(int i=0;i<A.size();i++){
        if(A[i]!=i+1) return i+1; 
    }
    return A.size()+1;
}
