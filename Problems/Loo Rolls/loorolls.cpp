#include <iostream>

int main(){
    long l, n;
    std::cin >> l >> n;
    
    int count = 1;
    long roll = l;
    
    while (true){
        long remainder = roll % n;
        if (remainder == 0){
            break;
        }
        n = (n-remainder);
        count += 1;
    }
    std::cout << count;
}