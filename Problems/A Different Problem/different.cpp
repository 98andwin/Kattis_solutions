#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true){

        long first;
        long second;

        cin >> first >> second;

        int c = cin.peek();
        if (c == EOF){
            break;
        }

        long res = first - second;

        if (res < 0){
            res *= -1;
        }
        cout << res << '\n';
    }
}