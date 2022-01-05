class Solution {
public:
    int mySqrt(int x) {
        long long  int s=0,e=x;
        long long int mid;
        long long int ans=0;
        while(s<=e){
            
            mid=s+(e-s)/2;
            
            long long  int sq= mid*mid;
            if(sq==x)
                return mid;
            
            else if(sq>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};

/*Example 1:

Input: x = 4
Output: 2
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.*/


        
    