#include <iostream>
#include <vector>

int main(){
    std::string code, secret;
    
    std::cin >> code >> secret;
    std::vector <char> sent = {};
    for (int i=0; i<code.size(); i++){
        int letter = code[i] - 65;
        if (i < secret.size()){
            letter -= secret[i%secret.size()] - 65;
        }
        else{
            letter -= sent[i-secret.size()] - 65;
        }
        if (letter < 0){
            letter += 26;
        }
        char res = letter + 65;
        sent.push_back(res);
        std::cout << res;
    }
}