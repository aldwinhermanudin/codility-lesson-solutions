#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){

	vector<int> A;
	
	
	A.push_back(3);
	A.push_back(1);
	A.push_back(2);
	A.push_back(4);
	A.push_back(3);

	int min;
	int temp_r=0;
	int temp_l=0;
	for(int i = 1; i < A.size() ; i++){
		temp_r += A[i];
	}
	temp_l = A[0];
	
	min = abs(temp_l - temp_r);
	cout << min << endl;	
	for(int i = 1; i < A.size()-1; i++){
		temp_l += A[i];
		temp_r -= A[i];
		if( min > abs(temp_l-temp_r) ) min = abs(temp_l-temp_r);
		cout << abs(temp_l-temp_r) << endl;
	}
	cout << min << endl;
}
