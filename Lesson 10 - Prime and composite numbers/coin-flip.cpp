#include <iostream>

using namespace std;

int count_tail(int total){
    int result = 0; 
    for(int j = 1; j <= total; j++){
        int counter = 0;
        int i = 1;
        for(; i*i < j; i++ ) if(j%i == 0) counter+=2;
        if ((i*i) == j) counter++;
        if( counter % 2 ) result++;
    }
    return result;
}

int main(){

    cout << count_tail(10) << endl;
    return 0;
}
