class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i< numRows; i++)
        {
            vector<int> row;
            for(int j=0; j<=i;j++)
            {
                if(j==0 || j == i)
                    row.push_back(1);
                else
                {
                    int n = ans.size()-1;
                    row.push_back(ans[n][j-1]+ans[n][j]);
                }
            }
            ans.push_back(row);
        }
        return ans;
    }
};
