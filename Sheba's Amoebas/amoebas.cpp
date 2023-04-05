#include <iostream>
#include <vector>
#include <ios>
using namespace std;

void find_loop (int i, int j, vector <vector <int> >& visited, vector <vector <int> >& map){
    for (int x=-1; x<2; x++){
        for (int y=-1; y<2; y++){
            if (i+x >= 0 && i+x < visited.size() && j+y >= 0 && j+y < visited[0].size()){
                if (!visited[i+x][j+y] && map[i+x][j+y]){
                    visited[i+x][j+y] = 1;
                    find_loop(i+x, j+y, visited, map);
                    return;
                }
            }
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    
    vector <vector <int> > map (m, vector <int> (n));
    vector <vector <int> > visited (map);
    vector <vector <int> >& ref_visited = visited;
    vector <vector <int> >& ref_map = map;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            char letter;
            cin >> letter;
            if (letter == '#'){
                map[i][j] = 1;
            }
        }
    }
    int count = 0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (map[i][j] && !visited[i][j]){
                visited[i][j] = 1;
                find_loop(i, j, ref_visited, ref_map);
                count += 1;
            }
        }
    }
    cout << count;
}