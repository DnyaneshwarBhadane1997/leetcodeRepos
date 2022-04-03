// https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int ix = 0 ,jx = 0 ; 
        bool rowToZero =  false , colToZero =  false;
        for (auto i :matrix[0])
        {
            if(i == 0){
                rowToZero = true;
                break;
            }
        }
        int l = matrix.size()-1;
        while(l >= 0 )
        {
            
            if(matrix[l][0] == 0){
                colToZero = true;
                break;
            }
            l--;
        }  
        ix = 0 ,jx = 0; 
        for (auto i =  matrix.begin();  i !=  matrix.end(); i++){ 
            jx = 0;
            for (auto j =  i->begin();  j !=  i->end(); j++){
                cout << *j << " ";
                if(*j == 0)
                {
                    matrix[ix][0] = 0;
                    matrix[0][jx] = 0;
                }
                jx++;
            }
            cout << endl;
            ix++;
        }
        
        ix = 0 ,jx = 0;
        for (auto  i : matrix){
            jx = 0;
            for (auto h : i){
                
                if(  ix != 0 && jx != 0 ){
                    if( matrix[ix][0] == 0 || matrix[0][jx] == 0 ){
                        matrix[ix][jx] =  0;
                    }
                } 
                cout << matrix[ix][jx] << " ";
                jx++;
            }
            ix++;
            cout <<  endl;
        }
        
        cout <<  rowToZero <<  colToZero ;
        if(rowToZero){
            l = 0;
            for (auto i :matrix[0])
                {
                    
                    matrix[0][l] = 0;
                    cout << matrix[0][l] <<" "<<l << endl;
                    l++;
                }   
        }
        if(colToZero){
            l = matrix.size()-1;
            while(l >= 0 )
            {

                matrix[l][0] = 0;
                l--;
            }
        }
    }
};