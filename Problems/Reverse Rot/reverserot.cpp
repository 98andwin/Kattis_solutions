#include <iostream>

int main(){
    const std::string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    while (true){
        int rot;
        std::cin >> rot;
        if (rot == 0){
            break;
        }
        std::string code;
        std::cin >> code;
        
        for (int i=code.size()-1; i>=0; i--){
            int num = code[i];
            if (num == 95){
                num = 26;
            }
            else if (num == 46){
                num = 27;
            }
            else{
                num -= 65;
            }
            
            int index = (num + rot) % 28;
            std::cout << letters[index];
        }
        std::cout << '\n';
    }
}