class Solution {
public:
    vector<char> helper(vector<char>& s, int start, int end) {
        if (start >= end)
            return s;

        int temp = s[end];
        s[end] = s[start];
        s[start] = temp;

        return helper(s, start+1, end-1);
    }
    
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        helper(s, 0, n);
        for (int i=0;i<n;i++){
            cout << s[i] ;
        }
    }
};