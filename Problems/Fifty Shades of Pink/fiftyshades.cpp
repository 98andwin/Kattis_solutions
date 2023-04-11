#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    int sum = 0;
    for (int i=0; i<amount; i++){
        std::string text;
        std::cin >> text;
        for (int j=0; j<text.size()-3; j++){
            std::string newstr = text.substr(j, 4);
            if (newstr[0] == 'p' || newstr[0] == 'P'){
                if ((newstr[1] == 'i' || newstr[1] == 'I') && (newstr[2] == 'n' || newstr[2] == 'N') && (newstr[3] == 'k' || newstr[3] == 'K')){
                    sum += 1;
                    break;
                }
            }
            else if (newstr[0] == 'r' || newstr[0] == 'R'){
                if ((newstr[1] == 'o' || newstr[1] == 'O') && (newstr[2] == 's' || newstr[2] == 'S') && (newstr[3] == 'e' || newstr[3] == 'E')){
                    sum += 1;
                    break;
                }
            }
        }
    }
    if (sum == 0){
        std::cout << "I must watch Star Wars with my daughter";
    }
    else{
        std::cout << sum;
    }
}