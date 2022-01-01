/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=0, i=0;
        for(int i=0;i<31;i++){
            ans=pow(2,i);
            if(ans==n)
                return true;
        }
        return false;
    }
};
