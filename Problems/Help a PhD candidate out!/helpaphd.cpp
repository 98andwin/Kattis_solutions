#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::string eq;
        std::cin >> eq;
        if (eq == "P=NP"){
            std::cout << "skipped\n";
        }
        else{
            for (int i=0; i<eq.size(); i++){
                if (eq[i] == '+'){
                    int a = stoi(eq.substr(0, i));
                    int b = stoi(eq.substr(i+1, eq.size()));
                    std::cout << a+b << '\n';
                    break;
                }
            }
        }
    }
}