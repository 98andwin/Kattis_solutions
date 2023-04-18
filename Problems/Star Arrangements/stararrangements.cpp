#include <iostream>

void star_check (int x, int y, int amount){
    int count = 0;
    int test = amount;
    while (true){
        if (count % 2 == 0){
            test -= x;
        }
        else{
            test -= y;
        }
        count += 1;
        if (test == 0){
            std::cout << x << ',' << y << '\n';
            break;
        }
        if (test < 0){
            break;
        }
    }
}

int main(){
    int amount;
    std::cin >> amount;
    
    std::cout << amount << ":\n";
    for (int i=2; i<=amount/2+1; i++){
        int x = i;
        int y = i-1;
        star_check(x, y, amount);
        y += 1;
        star_check(x, y, amount);
    }
}