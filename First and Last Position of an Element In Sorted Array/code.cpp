#include<iostream>
#include<vector>
int firstOcc(vector<int>arr,int n,int key){
    int s=0,e=n-1,mid;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key)
            e=mid-1;
        
        else
            s=mid+1;
    }
    return ans;
}

int lastOcc(vector<int>arr,int n,int key){
    int s=0,e=n-1,mid;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
        
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
	pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}

/*Sample Input 1:
2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2
Sample Output 1:
-1 -1 
4 7
Explanation Of Sample Output 1:
For the first test case, 3 is not present in the array. Hence the first and last occurrence of 3 is -1 and -1.

For the second test case, the first occurrence of 2 in at index 4 and last occurrence is at index 7.
Sample Input 2:
2
4 0
0 0 0 0
1 2
2
Sample Output 2:
0 3
0 0
*/