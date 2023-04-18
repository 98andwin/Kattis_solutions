#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount, skip, value;
    
    cin >> amount >> skip;
    
    for (int i=0; i<amount; i++){
        cin >> value;
        if (i % skip == skip-1){
            cout << value << ' ';
        }
    }
}