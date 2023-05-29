#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int a, b, c, l;

    cin >> a >> b >> c >> l;

    bool impossible = true;

    for (int i=0; i<=l/a; i++){
        int diff = l-(i*a);     //No need to do loop through all possible combinations, some can be skipped.

        for (int j=0; j<=diff/b; j++){
            int new_diff = diff-(j*b);
            
            if (new_diff % c == 0){     //Don't need to do an other for loop here, just check if c evenly divides.
                impossible = false;
                    cout << i << ' ' << j << ' ' << new_diff/c << '\n';
            }
        }
    }

    if (impossible){
        cout << "impossible";
    }
}



/*Improvement in motion

#include <iostream>
#include <ios>
#include <set>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int a, b, c, l;

    cin >> a >> b >> c >> l;

    bool impossible = true;
    set<string> output;
    vector<int> order;

    //Find the two largest values to reduce the amount of steps taken.
    if (a >= b && b >= c){
        order = {0, 1, 2};
    }
    else if (a >= c && c >= b){
        order = {0, 2, 1};
    }
    else if (b >= a && a >= c){
        order = {1, 0, 2};
    }
    else if (b >= c && c >= a){
        order = {1, 2, 0};
    }
    else if (c >= a && a >= b){
        order = {2, 0, 1};
    }
    else if (c >= b && b >= a){
        order = {2, 1, 0};
    }

    vector<int> legs = {a, b, c};
    int x = legs[order[0]], y = legs[order[1]], z = legs[order[2]];

    for (int i=0; i<=l/x; i++){
        int diff = l-(i*x);     //No need to do loop through all possible combinations, some can be skipped.

        for (int j=0; j<=diff/y; j++){
            int new_diff = diff-(j*y);
            
            if (new_diff % z == 0){     //Don't need to do an other for loop here, just check if c evenly divides.
                impossible = false;
                vector<int> res (3, 0);
                res[order[0]] = i;
                res[order[1]] = j;
                res[order[2]] = new_diff/z;
                string text = to_string(res[0]) + ' ' + to_string(res[1]) + ' ' + to_string(res[2]);
                output.insert(text);
            }
        }
    }

    if (impossible){
        cout << "impossible";
    }
    else{
        for (set<string>::const_iterator it = output.cbegin(); it != output.cend(); it++){
            cout << *it << '\n';
        }
    }
}
*/