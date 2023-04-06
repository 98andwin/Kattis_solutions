#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    char check = '1';
    std::string res = "";
    for (int i=0; i<text.size(); i++){
        if (text[i] != check){
            check = text[i];
            res.push_back(text[i]);
        }
    }
    std::cout << res;
}