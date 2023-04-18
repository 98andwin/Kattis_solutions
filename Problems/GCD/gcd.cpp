#include <iostream>
using namespace std;

int euklides(int a, int b){
    if (b == 0){
        return a;
    }
    
    return euklides(b, a%b);
}

int main(){
    int a, b;
    cin >> a >> b;
    if (a>b){
        cout << euklides(a, b);
    }
    else{
        cout << euklides(b, a);
    }
}