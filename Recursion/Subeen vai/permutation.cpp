
 void perm(vector<vector<int>> &ans, int s, vector<int>&A){


if(s==A.size()-1){
    ans.push_back(A);
    return;
}
for(int i = s;i<A.size();i++){
        swap(A[i],A[s]);
        perm(ans, s+1, A);
        swap(A[i],A[s]);
}

}


vector<vector<int>> Solution::permute(vector<int>&A) {

vector<vector<int>>ans;

perm(ans, 0 , A);

return ans;


}
