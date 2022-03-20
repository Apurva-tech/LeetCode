class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int res = check(A, B, A[0]);
        return (res != -1) ? res : check(A, B, B[0]);
    }

    int check(vector<int>& A, vector<int>& B, int val) {
        int a = 0, b = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] != val && B[i] != val)
                return -1;
            else if (A[i] != val)
                a++;
            else if (B[i] != val)
                b++;
        }
        return min(a, b);
    }
};