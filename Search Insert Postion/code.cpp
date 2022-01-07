class Solution {
public:
    int searchInsert(vector<int>& ar, int target) {
    	//Optimize approch using binary search
		int low=0,high=n-1,mid;
		while(low<=high){
			mid=low+(high-low)/2;
			if(ar[mid]==target)
				return mid;
			else if(ar[mid]>target) 
				high=mid-1;
			else
				low=mid+1;
		}	
		return low;
		
		
		
		
		//using itrattive approch
		int n=ar.size();
        int i=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==target)
                return i;
            if(ar[i]>target)
                return i;
            
            if(i==n-1)
                return n;
        }
        return i;
    }
};