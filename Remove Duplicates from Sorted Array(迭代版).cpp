class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(!n) return 0;
        int index = 0;
        for(int i = 1; i < n; i++) {
            if(A[i] != A[index])
                A[++index] = A[i];
        }
        return index+1;
    }
};
