#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <std::string> arr (1000);
    for (int i=0; i<amount; i++){
        std::string first;
        std::string second;
        
        std::cin >> first >> second;
        
        try{
            int num = std::stoi(second);
            arr[num] = first + '\n';
        }
        
        catch (...){
            int num = std::stoi(first);
            arr[num/2] = second + '\n';
        }
    }
    
    for (int i=0; i<arr.size(); i++){
        std::cout << arr[i];
    }
}