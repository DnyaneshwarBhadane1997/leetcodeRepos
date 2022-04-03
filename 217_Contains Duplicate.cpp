class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s1 ;
        
        for(auto i : nums){
            cout << i;
            if(s1.find(i) == s1.end()){
                s1.insert(i);
            }else{
               return true; 
            }
        }
        return false;
                

    }
};