#include <iostream>
#include <ios>
#include <vector>
using namespace std;


bool pathFinding(vector<int> moves, int goal_x, int goal_y){
    int x = 0, y = 0;

    int rot = 0; // 0 N, 1 E, 2 S, 3 W

    for (int i=0; i<moves.size(); i++){
        if (moves[i] == 1){ // turn left
            rot--;
            if (rot < 0){
                rot = 3;
            }
        }
        else if (moves[i] == 2){ // turn right
            rot = (rot + 1) % 4;
        }

        else{ // go forward
            if (rot == 0){
                y++;
            }
            else if (rot == 1){
                x++;
            }
            else if (rot == 2){
                y--;
            }
            else if (rot == 3){
                x--;
            }
        }
    }

    if (goal_x == x && goal_y == y){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int x, y;
    cin >> x >> y;
    int amount;
    cin >> amount;

    vector<int> movement;

    for (int i=0; i<amount; i++){
        string text;
        cin >> text;
        if (text == "Forward"){
            movement.push_back(0);
        }
        else if (text == "Left"){
            movement.push_back(1);
        }
        else if (text == "Right"){
            movement.push_back(2);
        }
    }

    for (int i=0; i<movement.size(); i++){
        movement[i] = (movement[i] + 1) % 3;
        for (int j=0; j<2; j++){
            if (pathFinding(movement, x, y)){
                if (movement[i] == 0){
                    cout << i+1 << " Forward";
                }
                else if (movement[i] == 1){
                    cout << i+1 << " Left";
                }
                else if (movement[i] == 2){
                    cout << i+1 << " Right";
                }
                return 0;
            }
            movement[i] = (movement[i] + 1) % 3;
        }
    }
}