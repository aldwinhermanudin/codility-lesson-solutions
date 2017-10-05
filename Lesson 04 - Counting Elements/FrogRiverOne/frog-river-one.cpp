// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
        
    vector<int> temp(X+1,0);
    int counter = X*(X+1)/2;
    for( int i = 0; i < A.size(); i++){
        temp[A[i]]++;
        if(temp[A[i]] == 1) counter -= A[i];
        if(counter == 0) return i;
    }
    return -1;
    // write your code in C++14 (g++ 6.2.0)
}
