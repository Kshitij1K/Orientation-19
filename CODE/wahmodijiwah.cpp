#include <bits/stdc++.h>

using namespace std;

void NumCombination(int& num_combinations,vector<int> denominations,int index,int sum){
    if (sum == 0){
        num_combinations++;
        return;
    }
    if (sum < 0) return;
    //if (sum > 0 && index==0) return;


    
    for (int i=index;i>=0;i--){
        NumCombination(num_combinations,denominations,i,sum-denominations.at(i));
    }
}

int main(){
    int num_denominations;
    cin >> num_denominations;
    vector<int> denominations;
    for (int i=0;i<num_denominations;i++){
        int temp;
        cin >> temp;
        denominations.push_back(temp);
    }
    int test_cases;
    cin >> test_cases;
    for (int i=0;i<test_cases;i++){
        int sum;
        cin >> sum;
        int num_combinations=0;
        NumCombination(num_combinations,denominations,num_denominations-1,sum);
        cout << num_combinations << endl;
        // for (int j=0;j<num_denominations;j++){
        //     cout << denominations.at(j) << " ";
        // }

    }

    return 0;
}