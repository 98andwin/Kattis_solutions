#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::vector <int> arr = {};
        int num;
        std::cin >> num;
        
        std::string frac;
        std::cin >> frac;
        int a;
        int b;
        for (int j=0; j<frac.size(); j++){
            if (frac[j] == '/'){
                a = std::stoi(frac.substr(0, j));
                b = std::stoi(frac.substr(j+1, frac.size()));
            }
        }
        
        while (a != 1 || b != 1){
            if (a > b){
                a -= b;
                arr.push_back(1);
            }
            else if (b > a){
                b -= a;
                arr.push_back(0);
            }
        }
        
        int index = 1;
        for (int j=0; j<arr.size(); j++){
            if (arr[arr.size()-j-1]){
                index = 2*index + 1;
            }
            else{
                index *= 2;
            }
        }
        std::cout << num << ' ' << index << '\n';
        
    }
}