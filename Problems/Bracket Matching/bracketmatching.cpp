#include <iostream>
#include <vector>

std::string checker(std::string text){
    if (text.size() == 2){
        if (text[0] == '(' && text[1] == ')'){
            return "Valid";
        }
        else if (text[0] == '[' && text[1] == ']'){
            return "Valid";
        }
        else if (text[0] == '{' && text[1] == '}'){
            return "Valid";
        }
        else{
            return "Invalid";
        }
    }
    else if (text.size() == 0){
        return "Valid";
    }
    std::vector <int> del = {};
    for (int i=text.size()-1; i>0; i--){
        if (text[i-1] == '(' && text[i] == ')'){
            del.push_back(i-1);
        }
        else if (text[i-1] == '{' && text[i] == '}'){
            del.push_back(i-1);
        }
        else if (text[i-1] == '[' && text[i] == ']'){
            del.push_back(i-1);
        }
    }
    
    if (del.size() == 0){
        return "Invalid";
    }
    for (int k: del){
        text.erase(k, 2);
    }
    return checker(text);
}

int main(){
    int amount;
    std::string text;
    std::cin >> amount >> text;
    if (amount%2){
        std::cout << "Invalid";
        return 0;
    }
    std::cout << checker(text);
}