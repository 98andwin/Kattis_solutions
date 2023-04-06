#include <iostream>

int main(){
    std::string first;
    std::string second;
    
    std::cin >> first >> second;
    
    std::string res = "";
    for (int i=first.size()-1; i >= 0; i--){
            res.push_back(first[i]);
        }
    int i_first = stoi(res);
    
    res = "";
    for (int i=second.size()-1; i >= 0; i--){
            res.push_back(second[i]);
        }
    int i_second = stoi(res);
    
    
    if (i_first > i_second){
        std::cout << i_first;
    }
    else{
        std::cout << i_second;
    }
}