#include <iostream>
#include <vector>

int main(){
    std::vector <bool> ball {true, false, false};
    
    std::string order;
    std::cin >> order;
    
    for (int i=0; i<order.size(); i++){
        if (order[i] == 'A'){
            bool temp = ball[0];
            ball[0] = ball[1];
            ball[1] = temp;
        }
        
        else if (order[i] == 'B'){
            bool temp = ball[1];
            ball[1] = ball[2];
            ball[2] = temp;
        }
        
        else if (order[i] == 'C'){
            bool temp = ball[0];
            ball[0] = ball[2];
            ball[2] = temp;
        }
    }
    
    for (int i=0; i<3; i++){
        if (ball[i]){
            std::cout << i+1;
        }
    }
}