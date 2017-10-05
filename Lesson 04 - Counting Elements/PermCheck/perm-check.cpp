#include <iostream>
#include <vector>
using namespace std;

int main () {
    
    
    vector<int> A;
    for(int i = 0; i < 15; i++) A.push_back(i);

    int size = A.size();
    vector<int> temp(size + 1);
    
    for( int i = 0; i < size; i++ ){
        if(A[i] < 1 || A[i] > size) return false;
        temp[A[i]]++;
    }
    
    for( int i = 1; i < size + 1; i++ ) if(temp[i] != 1) return false;
    
    return true;
}
