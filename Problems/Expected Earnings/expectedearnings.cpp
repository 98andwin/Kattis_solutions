#include <iostream>
using namespace std;

int main(){
    int n, k;
    double p;
    
    cin >> n >> k >> p;
    if (n*p >= k){
        cout << "spela inte!";
    }
    else{
        cout << "spela";
    }
}