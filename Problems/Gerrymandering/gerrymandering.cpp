#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, D;
    
    cin >> N >> D;
    vector <vector<int>> votes (D, vector <int> (2));
    double sum = 0;
    for (int i=0; i<N; i++){
        int P, x, y;
        cin >> P >> x >> y;
        
        votes[P-1][0] += x;
        votes[P-1][1] += y;
        sum += x + y;
    }
    
    double waste_a = 0;
    double waste_b = 0;
    for (int i=0; i<D; i++){
        int total = votes[i][0] + votes[i][1];
        
        if (votes[i][0] > votes[i][1]){
            cout << "A " << votes[i][0] - (total/2) - 1 << ' ' << votes[i][1];
            waste_a += votes[i][0] - (total/2) - 1;
            waste_b += votes[i][1];
        }
        
        else{
            cout << "B " << votes[i][0] << ' ' << votes[i][1] - (total/2) - 1;
            waste_a += votes[i][0];
            waste_b += votes[i][1] - (total/2) - 1;
        }
        cout << '\n';
    }
    double diff = waste_a - waste_b;
    if (diff < 0){
        diff *= -1;
    }
    double res = diff/sum;
    cout.precision(10);
    cout << res;
}