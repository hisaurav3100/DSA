class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxw=0;
        for(int i=0;i<sentences.size();i++)
        {
            int c=0;
            for(int j=0; j<sentences[i].size();j++)
            {
                if(sentences[i][j] == ' ')
                {
                    c++;
                }
            }
            int w=c+1;
            if(maxw<w)
            maxw=w;
        }
        return maxw;
    }
};