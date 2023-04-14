#include <iostream>
#include <vector>

int main(){
    std::vector <int> found (42, 0);
    for (int i=0; i<10; i++){
        int value;
        std::cin >> value;
        
        found[value%42] = 1;
    }
    int sum = 0;
    for (int k: found){
        if (k==1){
            sum += 1;
        }
    }
    std::cout << sum;
}