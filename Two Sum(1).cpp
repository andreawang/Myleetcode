class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_set<int>myset;
        vector<int>ret;
        
        for(int n = 0; n < numbers.size(); n++) {
            if(myset.find(target - numbers[n]) != myset.end())
                for(int j = 0; j < n; j++) {
                    if(target - numbers[n] == numbers[j]) {
                        ret.push_back(j + 1);
                        ret.push_back(n + 1);
                        return ret;
                    }
                }
                myset.emplace(numbers[n]);
        }
    }
};
