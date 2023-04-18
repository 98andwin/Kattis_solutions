#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    
    int s, m, l;
    if (a < b && a < c && b < c){
        s = a;
        m = b;
        l = c;
    }
    else if (a < b && a < c && c < b){
        s = a;
        m = c;
        l = b;
    }
    
    else if (b < a && b < c && a < c){
        s = b;
        m = a;
        l = c;
    }
    else if (b < a && b < c && c < a){
        s = b;
        m = c;
        l = a;
    }
    
    else if (c < a && c < b && a < b){
        s = c;
        m = a;
        l = b;
    }
    else if (c < a && c < b && b < a){
        s = c;
        m = b;
        l = a;
    }
    
    if (m-s == l-m){
        std::cout << 2*l - m;
    }
    else if (m-s < l-m){
        std::cout << 2*m - s;
    }
    else{
        std::cout << 2*m - l;
    }
}