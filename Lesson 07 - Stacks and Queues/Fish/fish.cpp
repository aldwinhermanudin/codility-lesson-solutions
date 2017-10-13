// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <stack>

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int size = A.size();
    stack<int> one, dead, alive;    
    for(int i = 0; i < size; i++){
		
        if(B[i] == 1) one.push(A[i]);
        else if(B[i] == 0 && one.size() == 0) alive.push(A[i]);
        else if(B[i] == 0 && one.size() > 0){
            while( one.size() > 0 ){
                if(one.top() > A[i]){
                    dead.push(A[i]);
                    break;
                }
                else{
                    dead.push(one.top());
                    one.pop();
                }
            }
            if( dead.top() != A[i] ) alive.push(A[i]);
        }
    }
    return one.size() + alive.size();
}
