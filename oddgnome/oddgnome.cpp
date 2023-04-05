#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++){
        int k;
        cin >> k;
        int prev = 0;
        bool found = false;
        for (int j=0; j<k; j++){
            int value;
            cin >> value;
            if (found){
                continue;
            }
            if (j != 0){
                if (value - prev != 1){
                    cout << j+1 << '\n';
                    found = true;
                }
            }
            prev = value;
        }
    }
}