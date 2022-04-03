class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max =  0;
        auto L = (prices.begin()),  R = prices.begin();
        while( R !=  prices.end())
        {
            if(*R-*L> max ){
                max = *R-*L;
                
                
            }
            if(*R - *L < 0){
                L = R;
            }
            R++;
        }
        
        return max;
    }
};