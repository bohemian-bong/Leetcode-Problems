class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set <int> rows;
        unordered_set <int> cols;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        unordered_set<int>::iterator itr;
        for(itr=rows.begin(); itr!=rows.end(); itr++)
        {
            int row = *itr;
            for(int i=0; i<matrix[row].size(); i++)
            {
                matrix[row][i]=0;
            }
        }
        for(itr=cols.begin(); itr!=cols.end(); itr++)
        {
            int col = *itr;
            for(int i=0; i<matrix.size(); i++)
            {
                matrix[i][col]=0;
            }
        }
    }
};
