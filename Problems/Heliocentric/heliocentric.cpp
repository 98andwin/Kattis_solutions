#include <iostream>
#include <ios>
using namespace std;

int main(){
    int count = 0;
    while (true){
        count++;
        int e, m;
        cin >> e >> m;
        int c = cin.peek();
        if (c == EOF){
            break;
        }
        int sum = 0;
        while (!(e == 0 && m == 0)){
            e = (e+1) % 365;
            m = (m+1) % 687;
            sum++;
        }
        cout << "Case " << count << ": " << sum << '\n';
    }
}