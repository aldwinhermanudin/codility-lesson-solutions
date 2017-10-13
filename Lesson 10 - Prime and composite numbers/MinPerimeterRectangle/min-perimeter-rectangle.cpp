// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    int a = 1;
    int b = 1;
    for(int i = 1; i*i <= N; i++){
         if(!(N%i)){
             a = i;
             b = N/i;
         }
    }
    return 2*(a+b);
 }