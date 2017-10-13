// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl 

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int runner = 0;
    int max_sum = 0;
    int negative_holder = 0;
    for(int value : A){
        runner = (runner + value > 0)? runner+value : 0;
        max_sum = (runner > max_sum)? runner : max_sum;
        if((!negative_holder || negative_holder < value) && value < 0) negative_holder = value;
    }
    if (max_sum) return max_sum;
    else return (negative_holder?negative_holder:0);
}

int solution1(vector<int> &A){
	
    int max_slice = A[0];
    int max_ending = A[0];
    
    for (int i = 1; i<A.size(); i++) {
        max_ending = max(A[i], max_ending + A[i]);
        max_slice = max(max_slice, max_ending);
    }
    
    return max_slice;
}
