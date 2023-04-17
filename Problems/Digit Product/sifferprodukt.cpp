#include <iostream>

int main(){
    std::string value;
    std::cin >> value;
    int sum = 1;
    while (true){
        int count = 0;
        for (int i=0; i<value.size(); i++){
            int remainder = (int)value[i] - 48;
            
            if (remainder != 0){
                sum *= remainder;
                count += 1;
            }
        }
        if (count == 1){
            break;
        }
        if (sum < 10){
            break;
        }
        
        value = std::to_string(sum);
        sum = 1;
    }
    std::cout << sum;
}