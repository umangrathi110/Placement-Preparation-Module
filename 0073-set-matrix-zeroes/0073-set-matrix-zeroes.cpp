class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        unordered_set<int> s1;
        unordered_set<int> s2;
        for (int i = 0 ; i < n; i++){
            for (int j = 0 ; j < m ; j++){
                if (matrix[i][j] == 0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for (auto i : s1){
            for (int j = 0 ; j < m; j++){
                matrix[i][j] = 0;
            }
        }
        for (auto i : s2){
            for (int j = 0 ; j < n ; j++){
                matrix[j][i] = 0;
            }
        }
    }
};