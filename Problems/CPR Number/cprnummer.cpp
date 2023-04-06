#include <iostream>
#include <vector>

int main(){
    
    std::string number;
    
    std::cin >> number;
    
    int sum = 0;
    std::vector<int> check {4,3,2,7,6,5,0,4,3,2,1};
    for (int i=0; i< number.size(); i++){
        sum += ((int)number[i] - 48)*check[i];
    }
    bool res = (sum%11==0);
    std::cout << res;
}