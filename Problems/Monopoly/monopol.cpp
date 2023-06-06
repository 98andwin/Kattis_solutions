#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    const vector<int> dist = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

    int amount;
    cin >> amount;

    double sum = 0;

    for (int i=0; i<amount; i++){
        int value;
        cin >> value;

        sum += dist[value]/36.0;
    }
    cout.precision(5);
    cout << fixed;
    cout << sum;
}