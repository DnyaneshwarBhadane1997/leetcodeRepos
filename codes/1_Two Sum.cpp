class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map  <int, int> abc;
        //abc.insert(pair<int, int> {"This" , 5} );
        auto  i = nums.begin();
        int index= 0;
        while(i != nums.end()){    
            if(abc.find(target - *i) != abc.end()){
                vector<int> result;
                auto  tmp  = abc.find(target - *i);
                result.push_back(tmp->second);
                result.push_back(index);
                return result;
            }
            abc.insert(pair<int, int> {*i ,index});
            i++;
            index++;
        }
        
        return nums;
    }
};