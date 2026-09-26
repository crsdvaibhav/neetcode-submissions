class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> out(2*size(nums));
        for(int i=0; i<2*size(nums); i++) out[ i ] = nums [ i % size(nums)];
        return out;
    }
};