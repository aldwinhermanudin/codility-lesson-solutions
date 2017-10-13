#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
	
    int top = 0;
    int index = 0;
    int counter = 0;
    int size = A.size();
    for(int i = 0; i < size; i++){
        if(counter == 0){
            top = A[i];
            index = i;
            counter++;
        }
        else if (counter > 0){
            if(top == A[i]) counter++;
            else counter--;
        }
    }
    
    if(counter > 0){
        counter = 0;
        for (int i : A) if(i == top) counter++;
        if(counter > (size/2)){
			vector<int> inc;
			vector<int> dec;
			int equi_leader=0;
			int sub_counter = 0;
			for(int i = 0; i < size; i++){
				if(A[i] == top){
					if(counter != 0) counter--;
					sub_counter++;
				}
				inc.push_back(sub_counter);
				dec.push_back(counter);
			}
			int j = 0;
			int k = size;
			int req = (size/2);
			for(int i = 0; i < size - 1; i++){
				j++;
				k--;
				
				if( (inc[i] > (j/2) || (j == 1 && inc[i])) && (dec[i] > (k/2) || (k == 1 && dec[size-1])) ){
					equi_leader++;
				}				
			}
			return equi_leader;
		}
		else return 0;
    }
    else return 0;
}
int main(){

    vector<int> sample = {4,3,4,4,4,2};
    cout << solution(sample) << endl;
    return 0;
}
