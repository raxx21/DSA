class Solution {
public:
    int climbStairs(int n) {
        if (n==1||n==2){
            return n;
        }

        int rec1 = climbStairs(n-1);
        int rec2 = climbStairs(n-2);

        return rec1 + rec2;
    }
};

//  Not an optimal solution 
//  Same as Fibonacci but base case is diff