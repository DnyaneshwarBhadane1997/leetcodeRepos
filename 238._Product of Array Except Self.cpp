

class Solution1 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        vector<int> left;
        vector<int> right;
        int mul = 1;
        int mulWithout0 = 1;
        int countOfZeros = 0;
        int tmp =  1 ,index= 0;
        for(auto i : nums){
            left.push_back(tmp);
            tmp =  tmp * i;
            
        }
        tmp =  1;
        for(auto i = nums.rbegin() ; i !=  nums.rend(); i++){
            right.push_back(tmp);
            tmp =  tmp * (*i);
        }
        auto j =  right.rbegin();
        for(auto i = left.begin();
            i !=  left.end() &&  j !=  right.rend(); 
            i++ , j++)
        {
            result.push_back((*i)*(*j));

        }
    
        return result;
    }
};


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int mul = 1;
        int mulWithout0 = 1;
        int countOfZeros = 0;
        for(auto i : nums){
            if(i == 0 )
            {   countOfZeros++;       
            }
            mulWithout0 = i == 0 ? mulWithout0  :mulWithout0 *i  ;
            mul = mul *i;      
            
        }
        for(auto i : nums){
            if(countOfZeros > 1 &&  i == 0){
                result.push_back( 0);    
            }else{
                if(i == 0){
                    result.push_back(mulWithout0);        
                }else{
                    result.push_back( mul /i);        
                }
                
            }
            
        }
        cout <<  mul ;
        return result;
    }
};