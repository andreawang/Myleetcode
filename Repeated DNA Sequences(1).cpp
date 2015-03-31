class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<int, int>m;
        hash<string> to_hash;
        vector<string> ret;
        string tmp;
        int hsh;
        
        int n = 0;
        while (n + 9 < s.size()) {
            tmp = s.substr(n, 10);
            hsh = to_hash(tmp);
        
        if (m.find(hsh) == m.end())
            m[hsh] = 1;
        else {
            if(m[hsh] == 1)
                ret.insert(ret.end(), tmp);
            
            m[hsh]++;
        }
            n++;
        }
        return ret;
    }
};
