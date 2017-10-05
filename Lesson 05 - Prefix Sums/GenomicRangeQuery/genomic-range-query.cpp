#include <iostream>
#include <vector>
#include <string>

using namespace std;

int convert(char in){
    switch(in){
        case 'A':
            return 0;
        case 'C':
            return 1;
        case 'G':
            return 2;
        case 'T':
            return 3;
        default:
            return -1;
    }
}
void print(vector<vector<int>> in){
    cout << "A C G T" << endl;
    for(vector<int> i : in){
        for(int j : i) cout << j << " ";
        cout << endl;
    }
}


vector<int> solution(string &S, vector<int> P, vector<int> Q){
    vector<vector<int>> gen_pre_sum;
    vector<int> genome(4,0);
    vector<int> result;
    gen_pre_sum.push_back(genome);
    for(char &i : S){
        genome[convert(i)]++;
        gen_pre_sum.push_back(genome);
    }

    for(int i = 0; i < P.size(); i++){
        int cur_sum[4];
        for(int j = 0; j < 4; j++){
            cur_sum[j] = gen_pre_sum[Q[i] + 1][j] - gen_pre_sum[P[i]][j];
            if (cur_sum[j] > 0){
                result.push_back(j+1);
                break;
            }   
        } 
    }
    //print(gen_pre_sum);
    //cout << S << endl;
    return result;
}

int main(){
    
    vector<int> P = {2,5,1};
    vector<int> Q = {4,5,6};
    string S = "CAGCCTA";
    //vector<int> lol = solution(test,);

    //vector<int> result = {1,2,3,4,5};
    vector<int> result = solution(S,P,Q);
    for(int &i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

