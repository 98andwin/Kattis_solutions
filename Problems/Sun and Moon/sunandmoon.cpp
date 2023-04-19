#include <iostream>

int main(){
    int ds;
    int ys;
    
    int dm;
    int ym;
    
    std::cin >> ds >> ys >> dm >> ym;
    
    if (ds == dm && ds == 0){
        std::cout << 0;
        return 0;
    }
    
    int dif = ym - dm;
    
    int sun = (ds + dif) % (ys);
    
    int moon = 0;
    
    if (sun == 0){
        std::cout << dif;
        return 0;
    }
    
    int res = dif;
    
    while(true){
        res += ym;
        sun = (sun + ym) % (ys);
        if (sun == 0){
            std::cout << res;
            break;
        }
    }
}