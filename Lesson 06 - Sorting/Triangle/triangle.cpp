#include <algorithm>

int solution(vector<int> &A) {
    if ( A.size() < 3) return 0;
    sort(A.begin(), A.end());
    vector<long> temp(A.begin(), A.end());
    for( int i = 0; i < temp.size() -2; i++ ) if(temp[i] + temp[i+1] > temp[i+2]) return 1;
    return 0;
}
