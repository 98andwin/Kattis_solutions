#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    int n, k;

    cin >> n >> k;

    cout << 2022+(n/k);
}