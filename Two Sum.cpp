class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int>mp;
        vector<int> ret;
        
        for(int n = 0; n < numbers.size(); n++) {
            if(mp.find(numbers[n]) == mp.end())
                mp[target - numbers[n]] = n;
            else {
                ret.push_back(mp[numbers[n]] + 1);
                ret.push_back(n + 1);
                return ret;
            }
        }
        return ret;
    }
};
