class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ;i<n;i++){
           int j = m-1;
           if(matrix[i][j] == target ){
               return true ;
           }
           else if (matrix[i][j]>target){
            for(j = 0 ;j<m-1;j++){
                if(matrix[i][j] == target){
                 return true ;
                }
            }
            break;         //this target variable not in a row than simply return it 
           }

           else {
               continue;
           }
        }
        return false ;
    }
};