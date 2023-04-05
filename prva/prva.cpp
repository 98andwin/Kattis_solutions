#include <iostream>
#include <vector>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    
    cin >> x >> y;
    
    vector <vector <char> > map (x, vector <char> (y));
    string shortest = "zyxwvutsrqponmlkjihgfedcba";
    for (int i=0; i<x; i++){
        string build = "";
        for (int j=0; j<y; j++){
            char letter;
            cin >> letter;
            map[i][j] = letter;
            if (letter != '#'){
                build += letter;
            }
            else{
                if (build.size() > 1){
                    if (build < shortest){
                        shortest = build;
                        build = "";
                    }
                }
                else{
                    build = "";
                }
            }
        }
        if (build.size() > 1){
            if (build < shortest){
                shortest = build;
            }
        }
    }
    
    
    for (int j=0; j<y; j++){
        string build = "";
        for (int i=0; i<x; i++){
            char letter = map[i][j];
            if (letter != '#'){
                build += letter;
            }
            else{
                if (build.size() > 1){
                    if (build < shortest){
                        shortest = build;
                        build = "";
                    }
                }
                else{
                    build = "";
                }
            }
        }
        if (build.size() > 1){
            if (build < shortest){
                shortest = build;
            }
        }
    }
    cout << shortest;
}