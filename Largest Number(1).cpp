class Solution {
private:
    static bool cmp(const int& num1, const int& num2) {
        return to_string(num1)+to_string(num2) > to_string(num2)+to_string(num1);
    }
public:
    string largestNumber(vector<int> &num) {
         
         sort(num.begin(), num.end(), cmp);
         
         string keep;
         
         for(int n = 0; n < num.size(); n++) {
             keep += to_string(num[n]);
         }
         return (keep[0] == '0' ? "0" : keep);
    }
};
