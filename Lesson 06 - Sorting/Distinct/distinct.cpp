#include <algorithm>
using namespace std;
int solution(vector<int> &A) {
    if(A.size() == 0 ) return 0;
    sort(A.begin(), A.end());
    int distinct = A[0];
    int counter = 1;
    for(int loop : A){
        if(loop != distinct){
            counter++;
            distinct = loop;
        }
    }
    return counter;
}
