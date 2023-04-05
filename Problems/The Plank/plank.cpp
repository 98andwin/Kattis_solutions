#include <iostream>
#include <vector>
using namespace std;

long factorial (int n){
    long res = 1;
    for (int i=1; i<=n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int value;
    cin >> value;
    
    vector <vector <int> > comb (0);
    
    for (int i=0; i<=value/3; i++){
        for (int j=0; j<=(value-3*i)/2; j++){
            vector <int> vec (3);
            vec[0] = value-3*i-2*j;
            vec[1] = j;
            vec[2] = i;
            comb.push_back(vec);
        }
    }
    
    long sum = 0;
    for (vector<int> k: comb){
        sum += factorial(k[0] + k[1] + k[2])/ (factorial(k[0]) * factorial(k[1]) * factorial(k[2]));
    }
    cout << sum;
}