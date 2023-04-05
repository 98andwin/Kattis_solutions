#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int count = 0;
    while (true){
        count++;
        int amount;
        cin >> amount;
        
        int c = cin.peek();
        if (c == EOF){
            return 0;
        }
        
        int min;
        int max;
        
        int value;
        cin >> value;
        min = value;
        max = value;
        for (int i=1; i<amount; i++){
            cin >> value;
            if (value > max){
                max = value;
            }
            if (value < min){
                min = value;
            }
        }
        
        cout << "Case " << count << ": " << min << ' ' << max << ' ' << max-min << '\n';
    }
}