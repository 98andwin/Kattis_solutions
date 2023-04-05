#include <iostream>
#include <vector>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    
    vector <vector <int> > map (x, vector <int> (y));
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            int value;
            cin >> value;
            map[i][j] = value;
        }
    }
    int min = 1000000000;
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            bool over = false;
            int total = 0;
            for (int a=0; a<x; a++){
                for (int b=0; b<y; b++){
                    if (over){
                        break;
                    }
                    if (i!=a || j!=b){
                        int x_diff = i-a;
                        if (x_diff < 0){
                            x_diff *= -1;
                        }
                        int y_diff = j-b;
                        if (y_diff < 0){
                            y_diff *= -1;
                        }
                        total += (x_diff+y_diff)*map[a][b];
                        cout << "Current total is: " << total << '\n';
                    }
                    if (total >= min){
                        over = true;
                    }
                }
                if (over){
                    break;
                }
            }
            cout << "Final total is: " << total << '\n' << '\n';
            if (!over){
                min = total;
            }
        }
    }
    cout << min;
}