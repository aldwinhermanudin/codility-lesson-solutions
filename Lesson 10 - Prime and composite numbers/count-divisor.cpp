#include <iostream>
using namespace std;

int divisor(int n){
    int i = 1;
    int result = 0;
    while ( i*i < n){
        if ( n%i == 0) result += 2;
        i++; 
    }
    if ((i * i) == n) result++; 
    return result;
}

int main  (){

    cout << divisor(16) << endl;
}
