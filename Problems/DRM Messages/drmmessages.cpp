#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    
    std::string first = text.substr(0, text.size()/2);
    std::string second = text.substr(text.size()/2, text.size()/2);
    
    int sum = 0;
    for (int i=0; i<first.size(); i++){
        int value = first[i];
        sum += value - 65;
    }
    sum = sum % 26;
    for (int i=0; i<first.size(); i++){
        int value = first[i];
        value = (value - 65 + sum) % 26;
        if (value < 0){
            value += 26;
        }
        char c = value + 65;
        first[i] = c;
    }
    
    sum = 0;
    for (int i=0; i<second.size(); i++){
        int value = second[i];
        sum += value - 65;
    }
    sum = sum % 26;
    for (int i=0; i<second.size(); i++){
        int value = second[i];
        value = (value - 65 + sum) % 26;
        if (value < 0){
            value += 26;
        }
        char c = value + 65;
        second[i] = c;
    }
    
    for (int i=0; i<second.size(); i++){
        int value = first[i];
        int add = second[i];
        value = (value + add) % 26;
        if (value < 0){
            value += 26;
        }
        char c = value + 65;
        first[i] = c;
    }
    std::cout << first;
}