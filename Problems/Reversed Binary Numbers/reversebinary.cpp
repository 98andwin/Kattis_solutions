#include <iostream>
#include <vector>

int main(){
    int number;
    std::cin >> number;
    std::vector<int> sum {};
    int i = 1;
    
    while (number != 0){
        int remainder = number%2;
        number = number / 2;
        sum.push_back(remainder);
    }
    
    int res = 0;
    int k = 1;
    bool check = false;
    for (int i=sum.size()-1; i>=0; i--){
        if (sum[i] != 0){
            check = true;
        }
        if (check){
            res += k*sum[i];
            k *= 2;
        }
    }
    std::cout << res;
}