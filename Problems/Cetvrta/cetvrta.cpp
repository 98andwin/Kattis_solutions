#include <iostream>
#include <vector>

int main(){
    
    int ax;
    int ay;
    
    int bx;
    int by;
    
    int cx;
    int cy;
    
    std::cin >> ax >> ay >> bx >> by >> cx >> cy;
    
    std::vector<int> array_x {ax, bx, cx};
    std::vector<int> array_y {ay, by, cy};
    
    int res_x = bx;
    int res_y = by;
    
    for (int i = 0; i < array_x.size()-1; i++){
        if (array_x[i] == array_x[i+1]){
            res_x = array_x[(i+2)%array_x.size()];
        }
        
        if (array_y[i] == array_y[i+1]){
            res_y = array_y[(i+2)%array_y.size()];
        }
    }
    
    std::cout << res_x << ' ' << res_y;
    
}