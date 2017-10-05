// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int helper = A%K;
    if (helper != 0) A += ( K-helper );
    B -= (B%K);
    
    if (A>B) return 0;
    else return (B-A)/K+1;
}
