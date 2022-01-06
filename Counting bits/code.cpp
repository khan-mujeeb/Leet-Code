class Solution {
public:
    vector<int> countBits(int n) {
        int ans=0,rem;
        vector<int> v1;
        for(int i=0;i<=n;i++){
                ans=0;          //making ans=0 for future calls
                int m=i;
                while(m!=0){   //loop to convert decimal to binary
                rem=m%2;
                if(rem==1)     //counting numbers of one
                    ans++;
                m=m/2;
            }
            v1.push_back(ans);  //adding no. of 1s ine vector
        }
   
        return v1;              //returning final answer
    }
};

/**/