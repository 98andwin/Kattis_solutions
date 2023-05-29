#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int diff = b-a;

    //People are good
    if (diff >= 0){
        cout << "Dr. Chaz will have " << diff << " piece";
        if (diff != 1){
            cout << 's';
        }
        cout << " of chicken left over!";
    }

    //People are bad
    else{
        cout << "Dr. Chaz needs " << -1*diff << " more piece";
        if (diff != -1){
            cout << 's';
        }
        cout << " of chicken!";
    }
}