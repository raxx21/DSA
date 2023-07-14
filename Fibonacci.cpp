class Solution {
public:
    int fib(int n) {

        if (n==0) {
            return 0;
        }
        
        if (n<=2){
            return 1;
        }

        int rec = fib(n-1);
        int rec1 = fib(n-2);

        return rec + rec1;
    }
};
//  Not and optimal solution