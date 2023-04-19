#include <iostream>
#include <map>

int main(){
    std::map <char, std::string> alphabet = {{'a', "@"}, {'b', "8"}, {'c', "("}, {'d', "|)"}, {'e', "3"}, {'f', "#"}, {'g', "6"}, {'h', "[-]"}, {'i', "|"}, {'j', "_|"}, {'k', "|<"}, {'l', "1"}, {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"}, {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"}, {'s', "$"}, {'t', "']['"}, {'u', "|_|"}, {'v', "\\/"}, {'w', "\\/\\/"}, {'x', "}{"}, {'y', "`/"}, {'z', "2"}};
    std::string text;
    getline(std::cin, text);
    
    for (int i=0; i<text.size(); i++){
        int value = text[i];
        if (value >= 65 && value <= 90){
            value += 32;
        }
        if (value >= 97 && value <= 122){
            char letter = value;
            std::cout << alphabet[letter];
        }
        else{
            std::cout << text[i];
        }
    }
}