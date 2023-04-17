#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string a, b;
    
    cin >> a >> b;
    
    int sum = 0;
    for (int i=0; i<a.size(); i++){
        if (a[i] != b[i]){
            sum += 1;
        }
    }
    
    cout << pow(2, sum);
}