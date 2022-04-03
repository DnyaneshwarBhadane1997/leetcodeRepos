class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> result;
        result.push_back(vector<int>(1 ,1));
        for (int i = 0 ;i< numRows-1 ;i++){
            vector<int> tmp;
            tmp.push_back(1);
            for (int j = 0 ;j < i ;j++){
                tmp.push_back(result[i][j] + result[i][j+1]);
            }
            tmp.push_back(1);
            result.push_back(tmp);
            
        }
        
        return result;
        
    }
};