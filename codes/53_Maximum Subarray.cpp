class Solution {
public:
    int findMax(int a ,int b){
        return a >  b ?  a:  b;
    }
    
    int maxSubArray(vector<int>& nums) {
        int sum =  0;
        int max =  nums[0];
        for (auto  i  :  nums){
            sum = findMax (sum + i , i)  ;
            if (max <  sum){
                max  =  sum;
            }
        }
        return max;
    }
    
};