#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    
    double wh = 0;
    double lo = 0;
    double up = 0;
    double sy = 0;
    
    for (int i=0; i<text.size(); i++){
        if ((int)text[i] == 95){
            wh += 1;
        }
        else if ((int)text[i] >= 97 && (int)text[i] <= 122){
            lo += 1;
        }
        else if ((int)text[i] >= 65 && (int)text[i] <= 90){
            up += 1;
        }
        else{
            sy += 1;
        }
    }
    std::cout.precision(10);
    std::cout << wh/text.size() << '\n' << lo/text.size() << '\n' << up/text.size() << '\n' << sy/text.size();
}