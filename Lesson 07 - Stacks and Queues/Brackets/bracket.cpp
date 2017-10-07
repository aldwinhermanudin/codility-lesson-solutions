// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <stack>
char valid_pair(char in){
    switch(in){
        case '{':
            return '}';
        case '}':
            return '{';
        case '(':
            return ')';
        case ')':
            return '(';
        case '[':
            return ']';
        case ']':
            return '[';
        default :
            return '!';
    }
}
            
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<char> s_char;
    for(char loop : S){
        if( loop == '{' || loop == '(' || loop == '[' ){
            s_char.push(loop);
        }
        else if (loop == valid_pair(s_char.top())){
            s_char.pop();                
        } 
        else return 0;
    }
    if(s_char.size() != 0) return 0;
    else return 1;
}
