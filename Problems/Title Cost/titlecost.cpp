#include <iostream>
using namespace std;

int main(){
    string text;
    double cap;
    cin >> text >> cap;
    
    auto res = (text.size() > cap) ? cap : text.size();
    cout.precision(10);
    cout << res;
}