#include <iostream>
#include <vector>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y, s;
    cin >> x >> y >> s;
    
    vector <vector <int> > map (x, vector <int> (y));
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            char letter;
            cin >> letter;
            if (letter == '*'){
                map[i][j] = 1;
            }
        }
    }
    
    int max = 0;
    int a, b;
    
    for (int i=0; i<=x-s; i++){
        for (int j=0; j<=y-s; j++){
            int count = 0;
            for (int k=1; k<s-1; k++){
                for (int l=1; l<s-1; l++){
                    if (map[i+k][j+l]){
                        count += 1;
                    }
                }
            }
            if (count > max){
                max = count;
                a = i;
                b = j;
            }
        }
    }
    
    map[a][b] = 4;
    map[a+s-1][b] = 4;
    map[a][b+s-1] = 4;
    map[a+s-1][b+s-1] = 4;
    
    for (int i=1; i<s-1; i++){
        map[a][b+i] = 2;
        map[a+i][b] = 3;
        map[a+s-1][b+i] = 2;
        map[a+i][b+s-1] = 3;
    }
    
    cout << max << '\n';
    for (vector <int> k: map){
        for (int j: k){
            if (j == 0){
                cout << '.';
            }
            else if (j == 1){
                cout << '*';
            }
            else if (j == 2){
                cout << '-';
            }
            else if (j == 3){
                cout << '|';
            }
            else if (j == 4){
                cout << '+';
            }
        }
        cout << '\n';
    }
}