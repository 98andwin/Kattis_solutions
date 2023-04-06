#include <iostream>

int main(){
    std::string first;
    std::string second;
    
    std::cin >> first >> second;
    
    int i=0;
    int j=0;
    std::string res = "";
    while(i<first.size() || j<second.size()){
        if (i==first.size()){
            std::string rest = second.substr(j, second.size());
            std::cout << res << rest;
            break;
        }
        else if (j==second.size()){
            std::string rest = first.substr(i, first.size());
            std::cout << res << rest;
            break;
        }
        
        int a = first[i];
        int b = second[j];
        if(first[i] <= second[j]){
            res.push_back(a);
            i++;
        }
        else{
            res.push_back(b);
            j++;
        }
    }
}