#include <iostream>
#include <vector>

int main(){
    int first;
    int second;
    
    std::cin >> first >> second;
    
    std::vector <int> array (first+second+1);
    
    for (int i=1; i<=first; i++){
        for (int j=1; j<=second; j++){
            array[i+j] += 1;
        }
    }
    int max = 0;
    std::vector<int> index (1);
    for (int i=1; i<array.size()-1; i++){
        
        if((array[i] - max ) > 0){
            max = array[i];
            index = std::vector<int> {i};
        }
        
        else if((array[i] - max ) == 0){
            index.push_back(i);
        }
        
    }
    
    for (int i: index){
        std::cout << i << '\n';
    }
}