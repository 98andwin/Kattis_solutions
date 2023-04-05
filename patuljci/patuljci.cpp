#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> numbers (0);
    int sum = 0;
    for (int i=0; i<9; i++){
        int value;
        cin >> value;
        numbers.push_back(value);
        sum += value;
    }
    int diff = sum - 100; 
    bool found = false;
    for (int i=0; i<numbers.size(); i++){
        for (int j=i+1; j<numbers.size(); j++){
            if (numbers[i] + numbers[j] == diff){
                numbers.erase(numbers.begin()+j);
                numbers.erase(numbers.begin()+i);
                found = true;
                break;
            }
        }
        if (found){
            break;
        }
    }
    for (vector <int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << '\n';
    }
}