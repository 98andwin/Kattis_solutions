#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int amount;
    cin >> amount;
    
    string res = "";
    for (int i=0; i<amount; i++){
        string code;
        cin >> code;
        int length = ceil(pow(code.size(), 0.5));
        if (length == 1){
            res.append(code + '\n');
            continue;
        }
        
        vector <vector <char> > matrix (length, vector <char> (length, '*'));
        for (int j=0; j<code.size(); j++){
            int x = j%length;
            int offset = j/length;
            int y = length-1-offset;
            matrix[x][y] = code[j];
        }
        
        for (int x=0; x<length; x++){
            for (int y=0; y<length; y++){
                if (matrix[x][y] != '*'){
                    res.push_back(matrix[x][y]);
                }
            }
        }
        if (i != amount-1){
            res.push_back('\n');
        }
    }
    cout << res;
}