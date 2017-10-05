// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
   int max = 0;
   int temp_max = 0;
   vector<int> temp(N,0);
   for( int i = 0; i < A.size(); i++ ){
        
        if( A[i] <= N ) {
            if( temp[A[i]-1] < max ) temp[A[i]-1] = max;
            if(++temp[A[i]-1] > temp_max) temp_max = temp[A[i]-1];
        }
        else if( A[i] == N + 1 ) max = temp_max;
   }
   for( int i = 0; i < temp.size(); i++ ) {
       if(temp[i] < max) temp[i] = max;
   }
   return temp;
}
