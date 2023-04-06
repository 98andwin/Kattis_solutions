#include <iostream>

int main(){
    double n;
    int k;
    
    std::cin >> n >> k;
    
    double sum = 0;
    
    for (int i=0; i<k; i++){
        int value;
        std::cin >> value;
        sum += value;
    }
    
    if (n == k){
        double average = sum/n;
        std::cout << average << ' ' << average;
    }
    else{
        
        double upperaverage = (sum + (n-k)*3)/n;
        double loweraverage = (sum - (n-k)*3)/n;
        std::cout << loweraverage << ' ' << upperaverage;
    }
}