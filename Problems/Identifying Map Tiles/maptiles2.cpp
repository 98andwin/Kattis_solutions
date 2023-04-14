#include <iostream>
using namespace std;

int main(){
    string coor;
    cin >> coor;
    
    int zoom = coor.size();
    
    int x = 0;
    int y = 0;
    for (int i=0; i<coor.size(); i++){
        int value = coor[i];
        value -= 48;
        
        if (value == 0){
            x *= 2;
            y *= 2;
        }
        else if (value == 1){
            x = 2*x + 1;
            y *= 2;
        }
        else if (value == 2){
            x *= 2;
            y = 2*y + 1;
        }
        else if (value == 3){
            x = 2*x + 1;
            y = 2*y + 1;
        }
    }
    cout << zoom << ' ' << x << ' ' << y;
}