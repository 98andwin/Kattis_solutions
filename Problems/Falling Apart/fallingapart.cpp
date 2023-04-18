#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <int> pieces (amount);
    
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        pieces[i] = value;
    }
    
    for (int i=0; i<pieces.size()-1; i++){
        for (int j=i+1; j<pieces.size(); j++){
            if (pieces[i] < pieces[j]){
                int temp = pieces[j];
                pieces[j] = pieces[i];
                pieces[i] = temp;
            }
        }
    }
    
    int a = 0;
    int b = 0;
    for (int i=0; i<pieces.size(); i++){
        if (i % 2 == 0){
            a += pieces[i];
        }
        else{
            b += pieces[i];
        }
    }
    std::cout << a << ' ' << b;
}