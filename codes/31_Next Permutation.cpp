class Solution {
public:
    void swap (vector<int> & nums,int src, int dest){
        int tmp;
        tmp= nums[src]; 
        nums[src] = nums[dest];
        nums[dest] = tmp;
    }
    
    void reverseArray(vector <int> & nums , int start, int end){
        
        for (int i =  start , j =  end ;  i < j ; i++ , j--){
            swap(nums,i, j);
        }
    }
    void nextPermutation(vector<int>& nums) {
        int rememberExachangePoint = 0;
        auto i =  nums.rbegin();
        int tmp  = *i;
        int index  = nums.size();
        index--;
        while(i != nums.rend()){
            if( *i <  tmp ){
              break;   
            }
            tmp = *i;
            index--;
            i++;
        }
        int rmp =nums.size();
        i =  nums.rbegin();
        while(i != nums.rend()){
            if(index== rmp) break;
            rmp--;
            if(nums[index]< *i){  
                swap(nums,index,rmp); 
                break;
            }
            i++;   
        }
        reverseArray(nums, index+1 , nums.size()-1);
    }
};