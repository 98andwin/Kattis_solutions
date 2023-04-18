#include <iostream>

int main(){
    while (true){
        int a, b;
        std::cin >> a >> b;
        if (a == 0 && b == 0){
            break;
        }
        int x = 0;
        int y = 0;
        int x_real = 0;
        int y_real = 0;
        int amount;
        std::cin >> amount;
        
        for (int i=0; i<amount; i++){
            char dir;
            int value;
            
            std::cin >> dir >> value;
            
            if (dir == 'u'){
                y += value;
                y_real += value;
                if (y_real >= b){
                    y_real = b-1;
                }
            }
            else if (dir == 'd'){
                y -= value;
                y_real -= value;
                if (y_real < 0){
                    y_real = 0;
                }
            }
            else if (dir == 'r'){
                x += value;
                x_real += value;
                if (x_real >= a){
                    x_real = a-1;
                }
            }
            else if (dir == 'l'){
                x -= value;
                x_real -= value;
                if (x_real < 0){
                    x_real = 0;
                }
            }
        }
        
        std::cout << "Robot thinks " << x << ' ' << y << '\n';
        std::cout << "Actually at " << x_real << ' ' << y_real << '\n' << '\n';
    }
}