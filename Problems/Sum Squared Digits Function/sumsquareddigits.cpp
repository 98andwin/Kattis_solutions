#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int k;
        int b;
        int n;
        
        cin >> k >> b >> n;
        
        vector <int> result (30, 0);
        
        while (true){
            if (n==0){
                break;
            }
            double logn = log(n)/log(b);
            int number = logn;
            
            int answer = n/pow(b,number);
            int res = answer*pow(b,number);
            
            n -= answer*pow(b,number);
            
            result[number] = answer;
            
        }
        
        
        int sum = 0;
        
        cout << i+1 << ' ';
        for (int j : result){
            sum += j*j;
        }
        cout << sum << '\n';
        
    }
}