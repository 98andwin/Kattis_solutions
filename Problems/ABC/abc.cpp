#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> order;

    int value;
    cin >> value;

    order.push_back(value);

    cin >> value;

    if (value < order[0]){
        order.insert(order.begin(), value);
    }
    else{
        order.push_back(value);
    }

    cin >> value;
    if (value < order[0]){
        order.insert(order.begin(), value);
    }
    else if (value < order[1]){
        order.insert(order.begin() + 1, value);
    }
    else{
        order.push_back(value);
    }

    for (int i=0; i<3; i++){
        char letter;
        cin >> letter;

        if (letter == 'A'){
            cout << order[0] << ' ';
        }
        else if (letter == 'B'){
            cout << order[1] << ' ';
        }
        else{
            cout << order[2] << ' ';
        }
    }
}