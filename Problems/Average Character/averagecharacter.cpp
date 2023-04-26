#include <iostream>
#include <ios>
#include <string>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int sum = 0;

    string line;
    getline(cin, line);
    
    for (string::const_iterator it = line.cbegin(); it != line.cend(); it++){
        int index = *it;
        sum += index;
    }
    
    char res = floor(sum/line.size());
    cout << res;
}