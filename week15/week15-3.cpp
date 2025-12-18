/// week15-3.cpp
/// LeetCode Programming Skills Math Q8 50. Pow(x, n) Pattern

class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0) return myPow(1/x, -n);
        if(n%2==0) return myPow(x*x, n/2);
        else return x*myPow(x, n-1);
    }
};
