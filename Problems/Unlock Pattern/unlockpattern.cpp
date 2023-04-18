#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    vector <vector<int>> map (3, vector <int> (3));
    int x;
    int y;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            int value;
            cin >> value;
            if (value == 1){
                x = i;
                y = j;
            }
            map[i][j] = value;
        }
    }
    
    double sum = 0;
    int current = 1;
    while (current != 9){
        bool found = false;
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (map[i][j] == current + 1){
                    sum += sqrt(pow(i-x, 2)+pow(j-y, 2));
                    x = i;
                    y = j;
                    current += 1;
                }
                if (found){
                    break;
                }
            }
            if (found){
                break;
            }
        }
    }
    cout.precision(10);
    cout << sum;
}