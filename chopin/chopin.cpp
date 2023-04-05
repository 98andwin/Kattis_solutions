#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count = 0;
    while (true){
        count += 1;
        string tone, tonality;
        cin >> tone >> tonality;
        if (tone.size() == 0){
            break;
        }
        
        if (tone.size() == 1){
            cout << "Case " << count << ": UNIQUE\n";
        }
        else{
            cout << "Case " << count << ": ";
            if (tone[1] == '#'){
                int index = tone[0];
                index += 1;
                if (index > 71){
                    cout << "Ab";
                }
                else{
                    char letter = index;
                    cout << letter << 'b';
                }
            }
            else if (tone[1] == 'b'){
                int index = tone[0];
                index -= 1;
                if (index < 65){
                    cout << "G#";
                }
                else{
                    char letter = index;
                    cout << letter << '#';
                }
            }
            cout << ' ' << tonality << '\n';
        }
    }
}