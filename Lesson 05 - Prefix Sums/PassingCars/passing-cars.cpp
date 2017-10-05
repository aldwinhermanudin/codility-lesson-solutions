// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int zero_cars = 0;
    int total = 0;
    for (int i = 0; i < A.size(); i++){
        if( !A[i] ) zero_cars++;
        else total += zero_cars;
        if (total > 1000000000) return -1;
    }
    return total;
}
