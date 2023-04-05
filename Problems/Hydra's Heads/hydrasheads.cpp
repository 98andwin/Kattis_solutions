#include <iostream>
#include <ios>
using namespace std;

int main(){
    int x = -1, y = -1;
    while (true){
        cin >> x >> y;
        if (x == 0 && y == 0){
            break;
        }
        
        int count = 0;
        while (x != 0 || y != 0){
            if (x == 0 && y <= 4){
                count += 4-y + 3;
                x = 0;
                y = 0;
            }
            else if (x == 1 && y <= 2){
                count += 2-y + 2;
                x = 0;
                y = 0;
            }
            else if (y > 2 && x > 0){
                count++;
                y -= 2;
                x += 1;
            }
            else if (x >= 2 && y > 0){
                count++;
                x -= 2;
            }
            else if (x > 0 && y > 0){
                count++;
                y += 1;
            }
        }
        cout << count << '\n';
    }
}