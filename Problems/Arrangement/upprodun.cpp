#include <iostream>

int main(){
    int size;
    int n;
    
    std::cin >> size >> n;
    
    int a = n/size;
    int remainder = n % size;
    
    
    for(int i=0; i<size; i++){
        for(int j=0; j<a; j++){
            std::cout << '*';
        }
        if(remainder > 0){
            std::cout << '*';
            remainder -= 1;
        }
        std::cout << '\n';
    }
}