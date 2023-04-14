#include <iostream>
#include <vector>

int main(){
    int a;
    int b;
    std::cin >> a >> b;
    
    std::string clear;
    std::string cipher;
    
    std::cin >> clear >> cipher;
    std::vector <char> code {};
    
    for (int i=clear.size()-1; i>=0; i--){
        code.push_back(clear[i]);
    }
    
    int j=0;
    for (int i=cipher.size()-1; i>= 0; i--){
        int ci = cipher[i];
        int cl = code[j];
        int diff = ci-cl;
        diff = diff % 26;
        if (diff < 0){
            diff = 26+diff;
        }
        char res = diff+97;
        code.push_back(res);
        j++;
        j=j%code.size();
    }
    
    for (int i=a; i<cipher.size(); i++){
        std::cout << code[code.size()-i-1];
    }
    std::cout << clear;
    
}