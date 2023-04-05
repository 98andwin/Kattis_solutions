#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total;
    cin >> total;
    
    string first;
    string second;
    
    cin >> first >> second;
    
    int a = 0, b = 0, c = 0, d = 0;
    
    for (int i=0; i<first.size(); i++){
        if (first[i] == 'T' && second[i] == 'T'){
            a++;
        }
        else if (first[i] == 'F' && second[i] == 'F'){
            b++;
        }
        else if (first[i] == 'T' && second[i] == 'F'){
            c++;
        }
        else if (first[i] == 'F' && second[i] == 'T'){
            d++;
        }
    }
    
    int sum = 0;
    while (a > 0 && total > 0){
        a--;
        total--;
        sum++;
    }
    if (total > 0){
        while (b > 0 && total > 0){
            b--;
            total--;
            sum++;
        }
    }
    if (total > 0){
        while (d > 0 && total > 0){
            d--;
            total--;
        }
    }
    if (total > 0){
        while (c > 0 && total > 0){
            c--;
            total--;
        }
    }
    
    cout << sum + c + d;
}