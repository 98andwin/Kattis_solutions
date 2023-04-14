#include <iostream>
#include <vector>

int main(){
    int set = 1;
    while (true){
        std::string str_amount;
        getline(std::cin, str_amount);
        int amount = std::stoi(str_amount);
        if (amount == 0){
            break;
        }
        
        std::vector <std::string> arr (amount);
        for (int i=0; i<amount; i++){
            if (i%2 == 0){
                std::string text;
                getline(std::cin, text);
                arr[i/2] = text;
            }
            else{
                int index = amount - ((i-1)/2) - 1;
                std::string text;
                getline(std::cin, text);
                arr[index] = text;
            }
        }
        std::cout << "SET " << set << '\n';
        for(std::string k : arr){
            std::cout << k << '\n';
        }
        set += 1;
    }
}