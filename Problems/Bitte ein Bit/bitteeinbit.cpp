#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    char l;
    cin >> l;
    cout << l;
}