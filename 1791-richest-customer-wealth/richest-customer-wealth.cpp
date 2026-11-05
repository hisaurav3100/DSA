class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int t=0,max=0;
        int m=accounts.size();
        int n=accounts[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                t=t+accounts[i][j];
            }

            if(max<t)
            max=t;
            t=0;
        }
        return max;
    }
};