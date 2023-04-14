#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    
    int T = 0;
    int C = 0;
    int G = 0;
    
    for (int i=0; i<text.size(); i++){
        if (text[i] == 'T'){
            T += 1;
        }
        
        else if (text[i] == 'C'){
            C += 1;
        }
        
        else if (text[i] == 'G'){
            G += 1;
        }
    }
    int min = 100;
    if (T < min){
        min = T;
    }
    
    if (C < min){
        min = C;
    }
    if (G < min){
        min = G;
    }
    
    std::cout << min*7 + T*T + G*G + C*C;
}