// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
	
   	int N = A.size();
	vector<int> K1(N);
	vector<int> K2(N);
	
	cout << "Input" << endl;
	for( int i : A)	cout << i << " ";
	cout << endl;
	
	for(int i = 1; i < N-1; i++){
		K1[i] = max(K1[i-1] + A[i], 0);
	}
	
	cout << endl << "K1" << endl;
	for( int i : K1 ){
		cout << i << " ";
	}
	
	
	for(int i = N-2; i > 0; i--){
		K2[i] = max(K2[i+1]+A[i], 0);
	}
	
	
	cout << endl << "K2" << endl;
	for( int i : K2 ){
		cout << i << " ";
	}
	
	int max = 0;

	for(int i = 1; i < N-1; i++){
		max = std::max(max, K1[i-1]+K2[i+1]);
	}

	return max;
}

int main(){
	
	
	vector<int> sample = {3,2,6,-1,4,5,-1,2};
	cout << endl << solution(sample) << endl;
}
