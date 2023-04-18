#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    double amount;
    cin >> amount;
    vector <double> points = {};
    double sum = 0;
    double quot = 1;
    
    for (int i=0; i<amount; i++){
        double value;
        cin >> value;
        
        sum += value*quot/5;
        quot = quot*4/5;
        
        points.push_back(value);
    }
    cout.precision(10);
    cout << sum << '\n';
    
    sum = 0;
    for (int i=0; i<points.size()-1; i++){
        sum += ((points.size()-1-i)*points[i]+(i+1)*points[i+1]) * pow(0.8, i);
    }
    sum *= 0.2;
    sum /= points.size();
    cout << sum << '\n';
}