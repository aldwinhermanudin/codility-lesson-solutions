// you can use includes, for example:
#include <algorithm>
//
// // you can write to stdout for debugging purposes, e.g.
// // cout << "this is a debug message" << endl;
//
int solution(vector<int> &A) {
    int size = A.size();
    if(size < 3) return 0;
    sort(A.begin(), A.end());
    if (A[size - 1] >= 0)
        return (A[0] * A[1] > A[size-2]*A[size-3])?A[0] * A[1] * A[size-1]:A[size-1]*A[size-2]*A[size-3];
    else
        return A[size-1]*A[size-2]*A[size-3];
}
