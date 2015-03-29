class Solution {
private:
    static bool cmp(const int& num1, const int& num2) {
        string str1 = to_string(num1) + to_string(num2);
        string str2 = to_string(num2) + to_string(num1);
        return str1 > str2;
    }
public:
    string largestNumber(vector<int> &num) {
         
         sort(num.begin(), num.end(), cmp);
         if(*num.begin() == 0)
            return to_string(0);
         
         string keep;
         vector<int>::iterator it;
         
         for(it = num.begin(); it != num.end(); it++) {
             keep += to_string(*it);
         }
         return keep;
    }
};
