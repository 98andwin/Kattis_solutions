#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    double a;
    cin >> a;

    double res = a * 0.09144;

    cout.precision(20);
    cout << std::fixed;
    cout << res;
}