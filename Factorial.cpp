long long int factorial(int N){
    if (N==1 || N==0) {
        return 1;
    }
    
    long long rec = factorial(N-1);
    long long small = N*rec;
    
    return small;
}