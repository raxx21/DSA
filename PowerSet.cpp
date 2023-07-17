vector<string> ans;
	    
void helper(string s,string tempAns,int index){
    
    if (s.size() == index){
        ans.push_back(tempAns);
        return;
    }
    
    helper(s,tempAns+s[index],index+1);
    
    helper(s,tempAns,index+1);
    
    return;
}

vector<string> AllPossibleStrings(string s){
    // Code here
    helper(s,"",0);
    sort(ans.begin(), ans.end());
    return ans;
}

// TLE