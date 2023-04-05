#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    int tb = 0;
    int lr = 0;
    for (int i=0; i<amount; i++){
        for (int j=0; j<2; j++){
            char letter;
            cin >> letter;
            if (letter == '0'){
                if (j){
                    lr++;
                }
                else{
                    tb++;
                }
            }
            cin >> letter;
            if (letter == '0'){
                if (j){
                    lr++;
                }
                else{
                    tb++;
                }
            }
        }
    }
    if (tb > lr){
        cout << lr/2 << ' ' << tb-(lr/2)*2 << ' ' << lr-(lr/2)*2;
    }
    else{
        cout << tb/2 << ' ' << tb-(tb/2)*2 << ' ' << lr-(tb/2)*2;
    }
}