#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int count = 1;
    while(true){
        int x, y;
        cin >> x >> y;

        if (x == 0 && y == 0){
            break;
        }

        vector<vector<char>> map (y, vector<char> (x, ' '));

        int a, b;
        for (int i=0; i<y; i++){ // Create the map
            
            string line;
            cin >> line;

            for (int j=0; j<x; j++){
                map[i][j] = line[j];
                if (line[j] == '*'){
                    a = i;
                    b = j;
                }
            }
        }

        int dir_x, dir_y; // Finding direction
        if (a == 0){
            dir_x = 0;
            dir_y = 1;
        }
        else if (b == 0){
            dir_x = 1;
            dir_y = 0;
        }
        else if (a == y-1){
            dir_x = 0;
            dir_y = -1;
        }
        else{
            dir_x = -1;
            dir_y = 0;
        }
        
        while(true){ // Travelling through the map
            a += dir_y;
            b += dir_x;

            if (map[a][b] == 'x'){
                break;
            }
            else if (map[a][b] == '/'){
                int temp = -1 * dir_x;
                dir_x = -1 * dir_y;
                dir_y = temp;
            }
            else if (map[a][b] == '\\'){
                int temp = dir_x;
                dir_x = dir_y;
                dir_y = temp;
            }
        }
        
        map[a][b] = '&';


        // Printing the house
        cout << "HOUSE " << count << '\n';

        for (int i=0; i<map.size(); i++){
            for (int j=0; j<map[0].size(); j++){
                cout << map[i][j];
            }
            cout << '\n';
        }
        count++;
    }
}