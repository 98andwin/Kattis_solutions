#include <iostream>
#include <vector>

void sort (std::vector <int> &arr){
    for (int i=0; i<arr.size()-1; i++){
        for (int j=i+1; j<arr.size(); j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <std::vector<int>> courses (amount, std::vector <int> (5));
    
    for (int i=0; i<amount; i++){
        std::vector <int> frosh (5);
        for (int j=0; j<5; j++){
            int value;
            std::cin >> value;
            frosh[j] = value;
        }
        std::vector <int> &arr = frosh;
        sort(arr);
        courses[i] = frosh;
    }
    
    int max = 0;
    int num = 0;
    for (int i=0; i<amount; i++){
        int sum = 0;
        for (int j=i; j<amount; j++){
            if (courses[i] == courses[j]){
                sum += 1;
            }
        }
        if (sum > max){
            max = sum;
            num = sum;
        }
        else if (sum == max){
            num += sum;
        }
    }
    /*
    for (std::vector <int> k: courses){
        for (int j: k){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }*/
    
    std::cout << num;
}