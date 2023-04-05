#include <iostream>
#include <vector>
#include <ios>
using namespace std;

void turn (vector<int>& board, int& left){
    if (left == 0){
        return;
    }
    int count = 0;
    if (board.size() == 0){
        board.push_back(count+1);
    }
    else{
        while (board[count] != 0 && count != board.size()){
            board[count] -= 1;
            count += 1;
        }
        if (count == board.size()){
            board.push_back(count+1);
        }
        else{
            board[count] = count+1;
        }
    }
    
    left -= 1;
    turn(board, left);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        int k, n;
        cin >> k >> n;
        vector <int> board (0);
        turn(board, n);
        
        cout << k << ' ' << board.size() << '\n';
        
        for (vector<int>::const_iterator it = board.begin(); it != board.end(); it++){
            cout << *it << ' ';
        }
        cout << '\n';
    }
}