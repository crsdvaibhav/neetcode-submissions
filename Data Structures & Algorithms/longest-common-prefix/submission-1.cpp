class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        auto m = 0;
        for(auto s:strs) if(m < size(s)) m = size(s);

        auto i = 0;
        string out = "";
        while(i < m)
        {
            char t = strs[0][i];
            for(auto j = 1; j < size(strs); j++)
            {
                if(t != strs[j][i]) return(out);
            }
            out += t;
            i++;
        }

        return out;
    }
};