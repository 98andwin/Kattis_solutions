#include <iostream>
#include <vector>

int main(){
    const int amount = 6;
    
    std::vector <int> pieces {1, 1, 2, 2, 2, 8};
    
    for (int i=0; i<amount; i++){
        int p;
        std::cin >> p;
        std::cout << pieces[i] - p << ' ';
    }
}