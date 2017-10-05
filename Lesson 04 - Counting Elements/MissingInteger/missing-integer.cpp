int solution(vector<int> &A) {
    int n = A.size();
    vector<int> temp(n+1, 0);
    for( int i = 0; i < n; i++){
        if( A[i] > n || A[i] < 1 ) continue;
        temp[A[i]]++;
    }
    for( int i = 1; i < n+1; i++ ) if(temp[i] == 0) return i;
}
