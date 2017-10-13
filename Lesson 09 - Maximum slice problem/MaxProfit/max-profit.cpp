// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <climits>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int profit = 0;
    int min = INT_MAX;
    int max = 0;
    for( int value : A){
        if(min > value) {
            min = value;
            max = value;
        }
        else{
            max = value;
            if(max - min > profit) profit = max-min;
        }
    }
    return profit;
}
