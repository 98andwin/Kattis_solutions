#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b, br, bs, a, as;

    cin >> b >> br >> bs >> a >> as;

    int saved = (br - b) * bs;

    int years = (saved / as) + 1;

    cout << a + years;
}