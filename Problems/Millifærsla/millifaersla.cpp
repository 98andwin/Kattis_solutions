#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && a < c){
        cout << "Monnei";
    }
    else if (b < a && b < c){
        cout << "Fjee";
    }
    else{
        cout << "Dolladollabilljoll";
    }
}