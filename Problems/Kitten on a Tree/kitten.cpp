#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<int> tree (101);
    int stuck;
    
    std::cin >> stuck;
    
    while (true){
        std::string row;
        getline(std::cin, row);
        
        bool first = true;
        int prev = 0;
        
        if (row == "-1"){
            break;
        }
        
        for (int i=0; i<row.size(); i++){
            int parent;
            if (row[i] == ' ' || i == row.size()-1){
                
                int value;
                if (i == row.size()-1){
                    value = std::stoi(row.substr(prev, row.size()));
                }
                else{
                    value = std::stoi(row.substr(prev, i-prev));
                }
                
                if (first){
                    first = false;
                    parent = value;
                }
                else{
                    tree[value] = parent;
                }
                prev = i+1;
            }
        }
    }
    
    while (stuck != 0){
        std::cout << stuck << ' ';
        stuck = tree[stuck];
    }
}