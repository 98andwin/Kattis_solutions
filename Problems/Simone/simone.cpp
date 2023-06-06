#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int amount, k;
    cin >> amount >> k;

    vector<int> freq (k, 0);

    for (int i=0; i<amount; i++){
        int value;
        cin >> value;

        freq[value-1]++;
    }

    int lowest = 1001;
    vector<int> output;

    for (int i=0; i<freq.size(); i++){
        if (freq[i] < lowest){
            output.clear();
            output.push_back(i+1);
            lowest = freq[i];
        }
        else if (freq[i] == lowest){
            output.push_back(i+1);
        }
    }

    cout << output.size() << '\n';
    for (int i=0; i<output.size(); i++){
        cout << output[i] << ' ';
    }
}