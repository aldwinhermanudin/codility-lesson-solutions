#include <iostream>

using namespace std;

int fibonacci_dynamic(int n){

    if(n == 0) return 0;
    if(n == 1) return 1;
    int min_two = 0;
    int min_one = 1;
    for (int i = 2; i <= n; i++){
        int temp = min_two;
        min_two = min_one;
        min_one += temp;
    }
    return min_one;
}
int fibonacci_recursion(int n){
    
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);
    }

int main(){
    int input;
    cin >> input;
    cout << fibonacci_dynamic(input) << endl;
    cout << fibonacci_recursion(input) << endl;
    return 0;
}