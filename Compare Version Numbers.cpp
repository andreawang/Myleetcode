class Solution {
    static void dealstring(const string& version, vector<int>& strvec) {
        int tmp = 0;
        
        for(int n = 0; n < version.size(); n++) {
            if(version[n] == '0' && tmp == 0) 
                continue;
            if(version[n] != '.')
                tmp = tmp * 10 + atoi(&version[n]);
            else 
            {
                strvec.push_back(tmp);
                tmp = 0;
            }
        }
        strvec.push_back(tmp);
    }
public:
    int compareVersion(string version1, string version2) {
        
        vector<int>keep1, keep2;
        
        dealstring(version1, keep1);
        dealstring(version2, keep2);
        
        int loop = max(keep1.size(), keep2.size());
        int v1, v2;
        
        for(int n = 0; n < loop; n++) {
            v1 = n < keep1.size() ? keep1[n] : 0;
            v2 = n < keep2.size() ? keep2[n] : 0;
            if(v1 < v2)
                return -1;
            if(v1 > v2)
                return 1;
        }
        return 0;
    }
};
