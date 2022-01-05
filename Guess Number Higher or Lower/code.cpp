/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int num);
class Solution {
public:
    int guessNumber(int n) {
        long long int s=1,e=n,mid;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            
            if(guess(mid)==0)
                return mid;
            
            else if(guess(mid)==1){
                ans=mid;
                s=mid+1;
            }
            else
                e=mid-1;
        }
        return ans;
    }
};

/*Example 1:

Input: n = 10, pick = 6
Output: 6
Example 2:

Input: n = 1, pick = 1
Output: 1
Example 3:

Input: n = 2, pick = 1
Output: 1*/