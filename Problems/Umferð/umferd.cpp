#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    float x, y;
    cin >> x >> y;

    float count = 0;
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            char l;
            cin >> l;
            if (l == '.'){
                count++;
            }
        }
    }
    float res = count/(x*y);
    cout << res;
}