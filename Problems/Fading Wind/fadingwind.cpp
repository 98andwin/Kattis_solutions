#include <iostream>

int main(){
    int h;
    int k;
    int v;
    int s;
    
    std::cin >> h >> k >> v >> s;
    
    int res = 0;
    while (h>0){
        //first step
        v += s;
        if (v/10 > 1){
            v -= v/10;
        }
        else{
            v -= 1;
        }
        
        //second step
        if (v >= k){
            h += 1;
        }
        
        //third step
        if (v > 0 && v < k){
            h -= 1;
            if (h==0){
                v = 0;
            }
        }
        
        //fourth step
        if (v <= 0){
            h = 0;
            v = 0;
        }
        
        //fifth step
        res += v;
        
        //sixth step
        if (s > 0){
            s -= 1;
        }
    }
    
    std::cout << res;
}