#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <std::vector<std::string>> friends (376, std::vector<std::string> (2, "0"));
    
    for (int i=0; i<amount; i++){
        std::string name, score, date;
        std::cin >> name >> score >> date;
        
        int j = std::stoi(date.substr(0, 2));
        int k = std::stoi(date.substr(3, 2));
        
        if (friends[(k-1)*31+j-1][0] == "0"){
            friends[(k-1)*31+j-1][0] = name;
            friends[(k-1)*31+j-1][1] = score;
        }
        else{
            if (std::stoi(score) > std::stoi(friends[(k-1)*31+j-1][1])){
                friends[(k-1)*31+j-1][0] = name;
                friends[(k-1)*31+j-1][1] = score;
            }
        }
    }
    
    
    std::vector <std::string> names;
    for (std::vector<std::string> k: friends){
        if (k[0] != "0"){
            names.push_back(k[0]);
        }
    }
    
    for (int i=0; i<names.size()-1; i++){
        for (int j=i+1; j<names.size(); j++){
            if (names[i] > names[j]){
                std::string temp = names[j];
                names[j] = names[i];
                names[i] = temp;
            }
        }
    }
    std::cout << names.size() << '\n';
    for (std::string k: names){
        std::cout << k << '\n';
    }
}