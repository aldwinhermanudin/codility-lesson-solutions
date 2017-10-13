#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 0) return -1;
    if(A.size() == 1) return 0;
    
    stack<pair<int,int>> leader;
    for (int i = 0; i < A.size(); i++){
        if(leader.size() > 0){
            if(leader.top().second != A[i]) leader.pop();
            else leader.push(make_pair(i,A[i]));
        }
        else leader.push(make_pair(i,A[i]));
    }
    if(leader.size() > 0){
        int candidate = leader.top().second;
        int counter = 0;
        for (int loop : A) if(loop == candidate) counter++;
        return (counter > (A.size()/2))? leader.top().first : -1;
    }
    else return -1;
}

int solution1(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int top = 0;
    int index = 0;
    int counter = 0;
    int size = A.size();
    for(int i = 0; i < size; i++){
        if(counter == 0){
            top = A[i];
            index = i;
            counter++;
        }
        else if (counter > 0){
            if(top == A[i]) counter++;
            else counter--;
        }
    }
    
    if(counter > 0){
        counter = 0;
        for (int i : A) if(i == top) counter++;
        return (counter > (size/2))? index : -1;
    }
    else return -1;
}
int main(){

    vector<int> sample = {1,2,3,4,5,6,6,6,6,6,6,6,6,7,8};
    cout << solution1(sample) << endl;
    return 0;
}