#include <iostream>
#include <vector>

std::vector<int> bin (int x){
    std::vector<int> res (4);
    int factor = 1;
    while (x!=0){
        int rem = x % 2;
        res[factor-1] = rem;
        x = (x-rem) / 2;
        factor += 1;
    }/*
    for (int k: res){
        std::cout << k << ' ';
    }
    std::cout << '\n';*/
    return res;
}

int main(){
    std::string text;
    std::cin >> text;
    std::vector<std::vector<int>> vec (4);
    for (int i=0; i<4; i++){
        int num = text[i] - 48;
        vec[i] = bin(num);
    }
    
    for (int j=3; j>=0; j--){
        for (int i=0; i<4; i++){
            if (vec[i][j]){
                std::cout << '*';
            }
            else{
                std::cout << '.';
            }
            if (i != 3){
                std::cout << ' ';
            }
            if (i == 1){
                std::cout << ' ' << ' ';
            }
        }
        std::cout << '\n';
    }
}