#include <iostream>

int main(){
    std::string letters;
    std::string numbers;
    getline(std::cin, letters);
    getline(std::cin, numbers);
    
    int size = numbers.size()/3;
    
    for (int i=0; i<size; i++){
        int index = std::stoi(numbers.substr(i*3, 3));
        std::cout << letters[index-1];
        
    }
    
}