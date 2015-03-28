class Solution {
private:
    static bool cmp(const string& str1, const string& str2) {
        return str1+str2 > str2+str1;
    }
public:
    string largestNumber(vector<int> &num) {
        
        vector<string> keep;
        int zerocount = 0;
        
        if (num.size() == 0)
            return NULL;
        
        for (int n = 0; n < num.size(); n++) {
            if(num[n] == 0)
                zerocount++;
            keep.push_back(to_string(num[n]));
        }
        
        if(num.size() == zerocount)
            return "0";
        
        if(num.size() == 1)
            return keep[0];
        
        string result;
        
        sort(keep.begin(), keep.end(), cmp);
        
        for(int n = 0; n < keep.size(); n++)
            result += keep[n];
        return result;
    }
};
