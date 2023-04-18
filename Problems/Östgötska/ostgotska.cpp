#include <iostream>

int main(){
    std::string text;
    getline(std::cin, text);
    
    double count = 0;
    double words = 1;
    bool found = false;
    for (int i=0; i<text.size()-1; i++){
        if (!found){
            if (text[i] == 'a' && text[i+1] == 'e'){
                found = true;
                count += 1;
            }
        }
        if (text[i] == ' '){
            words += 1;
            found = false;
        }
    }
    double q = count / words;
    if (q >= 0.4){
        std::cout << "dae ae ju traeligt va";
    }
    else{
        std::cout << "haer talar vi rikssvenska";
    }
}