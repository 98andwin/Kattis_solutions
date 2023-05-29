#include <iostream>
#include <ios>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> map (7, vector<int> (7, 2));

    for (int i=0; i<7; i++){
        string text;
        getline(cin, text);
        for (int j=0; j<7; j++){
            char letter = text[j];
            if (letter == 'o'){
                map[i][j] = 1;
            }
            else if (letter == '.'){
                map[i][j] = 0;
            }
        }
    }

    int count = 0;
    for (int i=0; i<7; i++){
        for (int j=0; j<7; j++){

            if (j+2 < 7){
                if ((map[i][j] != 2) && (map[i][j+1] != 2) && (map[i][j+2] != 2)){
                    //checking horisontally
                    if (map[i][j] && map[i][j+1] && !map[i][j+2]){
                        count++;
                    }
                    if (!map[i][j] && map[i][j+1] && map[i][j+2]){
                        count++;
                    }
                }
            }
            

            if (i+2 < 7){
                if ((map[i][j] != 2) && (map[i+1][j] != 2) && (map[i+2][j] != 2)){
                    //checking vertically
                    if (map[i][j] && map[i+1][j] && !map[i+2][j]){
                        count++;
                    }
                    if (!map[i][j] && map[i+1][j] && map[i+2][j]){
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
}

/*
  o..  
  ...  
......o
o.o.o.o
.......
  .o.  
  ...  
output: 1


  ooo  
  ooo  
ooooooo
ooooooo
oooo.oo
  ooo  
  ooo  
output: 4
*/