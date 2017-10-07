#include <algorithm>


int solution(vector<int> &A) {
    int size = A.size();
    vector<pair<int,int>> disks;
    int counter = 0;
    for( int i = 0; i< size; i++ ) disks.push_back(make_pair(i-A[i], i+A[i]));
    sort(disks.begin(), disks.end());
    for( int i = 1; i < size; i++ ){
        int temp_counter = 0;
        for( int j = 0; j < i; j++ ){
            if(disks[i].first >= disks[j].first && disks[i].first <= disks[j].second) temp_counter++;
        }
    counter += temp_counter;
    }
    return counter;
}
