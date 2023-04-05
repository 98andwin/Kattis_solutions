#include <iostream>
#include <vector>
#include <ios>
using namespace std;

void devolve_cloud(vector <vector<int>>& map, int i, int j){
    for (int x=-1; x<=1; x++){
        for (int y=-1; y<=1; y++){
            if ((x+y == 1 || x+y == -1) && x != y){
                if (i+x >= 0 && i+x < map.size() && j+y >= 0 && j+y < map[0].size()){
                    if (map[i+x][j+y] == 2){
                        map[i+x][j+y] = 1;
                        devolve_cloud(map, i+x, j+y);
                    }
                }
            }
        }
    }
}

void find_island(vector <vector<int>>& map, vector <vector<int>>& found, int i, int j){
    for (int x=-1; x<=1; x++){
        for (int y=-1; y<=1; y++){
            if ((x+y == 1 || x+y == -1) && x != y){
                if (i+x >= 0 && i+x < map.size() && j+y >= 0 && j+y < map[0].size()){
                    if (map[i+x][j+y] == 1 && found[i+x][j+y] != 1){
                        found[i+x][j+y] = 1;
                        find_island(map, found, i+x, j+y);
                    }
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w;
    cin >> h >> w;
    vector <vector<int>> map (h, vector<int> (w));
    
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            char letter;
            cin >> letter;
            if (letter == 'L'){
                map[i][j] = 1;
            }
            else if (letter == 'W'){
                map[i][j] = 0;
            }
            else{
                map[i][j] = 2;
            }
        }
    }
    
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if (map[i][j] == 1){
                devolve_cloud(map, i, j);
            }
        }
    }
    
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if (map[i][j] == 2){
                map[i][j] = 0;
            }
        }
    }
    vector <vector<int>> found (h, vector<int> (w));
    
    int count = 0;
    
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if (map[i][j] && !found[i][j]){
                found[i][j] = 1;
                find_island(map, found, i, j);
                count += 1;
            }
        }
    }
    cout << count;
}