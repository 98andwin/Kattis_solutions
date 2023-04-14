#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    int previous = 0;
    bool fail = false;
    for (int i=1; i<=amount; i++){
        int value;
        std::cin >> value;
        
        if (value != previous + 1){
            for (int j=previous+1; j<value; j++){
                std::cout << j << '\n';
            }
            fail = true;
        }
        previous = value;
    }
    if (!fail){
        std::cout << "good job";
    }
}