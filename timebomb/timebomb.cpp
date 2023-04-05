#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int amount;
    vector <int> arr;
    vector <int> check;
    for (int i=0; i<5; i++){
        string line;
        getline(cin, line);
        if (i==0){
            amount = (line.size()+1)/4;
            arr = vector <int> (amount);
            check = vector <int> (amount);
        }
        for (int j=0; j<line.size(); j++){
            if (j%4 != 3 && line[j] == '*'){
                int index = j/4;
                arr[index] += 3*i+(j+1)%4;
                if (3*i+((j+1)%4) == 4){
                    check[index] = 1;
                }
            }
        }
    }
    int sum = 0;
    for (int i=0; i<arr.size(); i++){
        if (arr[i] == 96){
            sum *= 10;
            continue;
        }
        else if (arr[i] == 45){
            sum += 1;
        }
        else if (arr[i] == 88){
            if (check[i]){
                sum += 5;
            }
            else{
                sum += 2;
            }
        }
        else if (arr[i] == 90){
            sum += 3;
        }
        else if (arr[i] == 65){
            sum += 4;
        }
        else if (arr[i] == 98){
            sum += 6;
        }
        else if (arr[i] == 48){
            sum += 7;
        }
        else if (arr[i] == 104){
            sum += 8;
        }
        else if (arr[i] == 94){
            sum += 9;
        }
        else{
            cout << "BOOM!!";
            return 0;
        }
        sum *= 10;
    }
    sum /= 10;
    if (sum % 6 == 0){
        cout << "BEER!!";
    }
    else{
        cout << "BOOM!!";
    }
    return 0;
}