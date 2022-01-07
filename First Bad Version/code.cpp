// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n,mid,ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(isBadVersion(mid)){	// current version is bad means there is a probablity that previous version can be bad
                ans=mid;
                e=mid-1;			//looking for p bad version 
            }
            else{			//if cuurent version is not bad means bad version will be prsent in future version
                s=mid+1;
            }
        }
        return ans;
    }
};

/*Example 1:

Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.
Example 2:

Input: n = 1, bad = 1
Output: 1*/