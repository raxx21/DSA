vector<vector<int>> ans;
void helper(vector<int> A, vector<int> tempAns, int index){
    
    if(A.size() == index){
        ans.push_back(tempAns);
        return;
    }
    tempAns.push_back(A[index]);
    helper(A,tempAns, index+1);
    tempAns.pop_back();
    helper(A,tempAns,index+1);
    
    return;
}

vector<vector<int> > subsets(vector<int>& A)
{
    helper(A,{},0);
    sort(ans.begin(), ans.end());
    return ans;
}

// TLE

