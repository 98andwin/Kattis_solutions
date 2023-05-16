#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int p, m, g;
    cin >> p >> m >> g;

    p--;
    m--;
    g--;

    map<int, string> output = {{0, "none"}, {1, "one"}, {2, "both"}};

    int count = 0;
    int dog_a = p % (a+b);
    int dog_b = p % (c+d);

    if (dog_a < a){
        count++;
    }

    if (dog_b < c){
        count++;
    }

    cout << output[count] << '\n';


    count = 0;

    dog_a = m % (a+b);
    dog_b = m % (c+d);

    if (dog_a < a){
        count++;
    }

    if (dog_b < c){
        count++;
    }

    cout << output[count] << '\n';

    count = 0;

    dog_a = g % (a+b);
    dog_b = g % (c+d);

    if (dog_a < a){
        count++;
    }

    if (dog_b < c){
        count++;
    }

    cout << output[count];
}