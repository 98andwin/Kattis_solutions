#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    int x = a, y = a;
    int count = 0;
    if (a == b){
        cout << 0;
        return 0;
    }
    while (x != b && y != b){
        count++;
        x--;
        y++;
        if (x == -1){
            x = 359;
        }
        if (y == 360){
            y = 0;
        }
    }
    if (x == b && y == b){
        cout << 180;
    }
    else if (x == b){
        cout << -count;
    }
    else if (y == b){
        cout << count;
    }
}