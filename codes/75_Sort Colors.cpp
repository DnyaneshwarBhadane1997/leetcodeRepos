class Solution {
public:
    
    void sortColors(vector<int>& nums) {
    
        int cnt0 =0,cnt1 =0,cnt2 =0;
        
        for(auto i : nums){
            i ==0 ?  cnt0++: i ==1 ? cnt1++: cnt2++; 
        }
        auto itr = nums.begin() ;
        int inx = 0;
        while(itr !=  nums.end()){
            if(cnt0 > inx){
                nums[inx] = 0;
            }
            else if (cnt0 + cnt1 > inx ) {
                nums[inx] = 1;
            }else{
                nums[inx] = 2;
            }
           
            itr++;
            inx++;

        }
        
    }
};
