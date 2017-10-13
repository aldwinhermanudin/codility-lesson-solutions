#include <iostream>

using namespace std;

bool is_prime(int n){

    for (int i = 2; i*i <= n; i++) if (!(n%i)) return false;
    return true;

}
int main(){
    
    cout << is_prime(31) << endl;

    return 0;
}
