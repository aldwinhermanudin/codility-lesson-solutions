#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> find_peak(vector<int> &input){
    int size = input.size();
    stack<int> peaks;
    for(int i = size - 2 ; i > 0; i--){
        if(input[i-1] < input[i] && input[i+1] < input[i]) peaks.push(input[i]);
    }
    return peaks;
}

int solution(vector<int> &A){

    stack<int> peaks = find_peak(A);
    int block_size;
    int size = A.size();
    for(int i = 1; i <= size; i++){

        if( size % i ) continue;
        stack<int> temp = peaks;
        block_size = i;
        int counter = i;
        bool has_peak = false;

        for(int value : A){
            
            if (temp.size() && value == temp.top()){
                temp.pop();
                has_peak = true;
            }
            counter--;
            if (!counter && !has_peak) {
                block_size = 0;
                break;
            }
            else if (!counter && has_peak) {
                has_peak = false;
                counter = i;
            }
        }
        if(block_size) break;
    }
    
    return (block_size?size/block_size:0);
}

int main(){

    vector<int> sample = {1,2,3,4,3,4,1,2,3,4,6,2};

    cout << solution(sample) << endl;

    return 0;
}