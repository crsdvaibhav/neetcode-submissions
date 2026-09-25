class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> vec = strs;
        unordered_map<string,vector<string>> m;
        for(auto i=0; i<size(strs); i++)
        {
            sort(vec[i].begin(), vec[i].end());
            m[vec[i]].push_back(strs[i]);
        }

        vector<vector<string>> out;
        for(auto x:m)
        {
            out.push_back(x.second);
        }

        return out;
    }
};
