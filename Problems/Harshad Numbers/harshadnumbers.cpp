#include <iostream>
#include <vector>

int main(){
    int number;
    
    std::cin >> number;
    while (true){
        int sum = 0;
        int total = number;
        std::vector <int> factors {};
        
        while (total != 0){
            int remainder = total % 10;
            factors.push_back(remainder);
            total = (total-remainder)/10;
        }
        
        for(int k:factors){
            sum += k;
        }
        
        if (number%sum == 0){
            std::cout << number;
            return 0;
        }
        else{
            number += 1;
        }
    }
}