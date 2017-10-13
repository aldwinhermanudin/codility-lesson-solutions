// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int counter = 0;
    for( char loop : S ){   
        if (loop == '(') counter++;
        else counter--;
        if (counter < 0) return 0;
    }
    if (counter == 0) return 1;
    else return 0;
}
