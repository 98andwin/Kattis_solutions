#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases;
    cin >> cases;
    
    for (int i=0; i<cases; i++){
        int guests;
        cin >> guests;
        vector <long> singles = {};
        long value;
        cin >> value;
        singles.push_back(value);
        for (int j=1; j<guests; j++){
            bool erased = false;
            cin >> value;
            for (int k=0; k<singles.size(); k++){
                if (value == singles[k]){
                    singles.erase(singles.begin()+k);
                    erased = true;
                    break;
                }
            }
            if (!erased){
                singles.push_back(value);
            }
        }
        cout << "Case #" << i+1 << ": " << singles[0] << '\n';
    }
}