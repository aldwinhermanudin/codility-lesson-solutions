#include <iostream>
#include <vector>
#include <stack>
#include <deque>

using namespace std;


int solution(vector<int> &H) {
        int N = H.size();
        
        stack<int> stack;
        stack.push(H[0]);
        
        int blocks = 1;
        
        for (int i = 1; i < N; i++) {
            int currentHeight = 0;
            
            if (stack.size() > 0) {
                currentHeight = stack.top();
            }
            
            if (currentHeight > H[i]) {
                stack.pop();
                i--;
            } else if (currentHeight < H[i]) {
                stack.push(H[i]);
                blocks++;
            }
        }
        
        return blocks;
    }

int main(){
	
	vector<int> input{8,8,5,7,9,8,7,4,8};
	cout << solution(input) << endl;
	return 0;
}

