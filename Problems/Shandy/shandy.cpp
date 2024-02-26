#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if (a <= b){
        cout << 2*a;
    }
    else{
        cout << 2*b;
    }
}