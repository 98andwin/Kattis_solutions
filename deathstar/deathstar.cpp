#include <iostream>
#include <ios>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> res (n);

    if (n == 1){
        cout << 1;
        return 0;
    }
    if (n<=29){
        for (int i=0; i<n; i++){
            bool added = false;
            for (int j=0; j<n; j++){
                int value;
                cin >> value;
                if (i != j){
                    res[j] = res[j] | value;
                }
            }
        }
    }
    else{
        for (int i=0; i<29; i++){
            bool added = false;
            for (int j=0; j<n; j++){
                int value;
                cin >> value;
                if (i != j){
                    res[j] = res[j] | value;
                }
            }
        }
    }
    for (vector<int>::iterator it = res.begin(); it != res.end(); it++){
        cout << *it << ' ';
    }
}