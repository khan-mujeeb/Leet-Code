#include<iostream>
using namespace std;
class Solution {
public:
    
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size(),mid;
        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            
            else{
                e=mid;
            }  
        }
        return s;
    }
};

/*Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1*/