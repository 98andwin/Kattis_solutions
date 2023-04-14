#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <char> adrian = {'A', 'B', 'C'};
    std::vector <char> bruno = {'B', 'A', 'B', 'C'};
    std::vector <char> goran = {'C', 'C', 'A', 'A', 'B', 'B'};
    
    int a = 0;
    int b = 0;
    int c = 0;
    
    for (int i=0; i<amount; i++){
        char letter;
        std::cin >> letter;
        if (letter == adrian[i%3]){
            a += 1;
        }
        if (letter == bruno[i%4]){
            b += 1;
        }
        if (letter == goran[i%6]){
            c += 1;
        }
        
    }
    
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    std::cout << max << '\n';
    if(max == a){
        std::cout << "Adrian\n";
    }
    if(max == b){
        std::cout << "Bruno\n";
    }
    if(max == c){
        std::cout << "Goran\n";
    }
}