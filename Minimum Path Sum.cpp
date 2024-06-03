class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i,j;
        int left,top;
        
        for(int i= 0 ; i< grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if( (j - 1) < 0)
                left = INT_MAX;
                else
                left = grid[i][j-1];

                if( (i - 1) < 0)
                top = INT_MAX;
                else
                top = grid[i-1][j];

                if(i==0 && j==0)
                continue;

                grid[i][j] += min(left,top);

            }

        }

        return grid[grid.size()-1][grid[0].size()-1];
    }
};
