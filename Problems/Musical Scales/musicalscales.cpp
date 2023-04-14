#include <iostream>
#include <vector>
#include <map>

int main(){
    std::vector <int> found (12, 0);
    std::vector <std::string> key = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
    std::map<std::string,int> tone;
    tone["A"]=0;
    tone["A#"]=1;
    tone["B"]=2;
    tone["C"]=3;
    tone["C#"]=4;
    tone["D"]=5;
    tone["D#"]=6;
    tone["E"]=7;
    tone["F"]=8;
    tone["F#"]=9;
    tone["G"]=10;
    tone["G#"]=11;
    
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::string value;
        std::cin >> value;
        found[tone[value]] = 1;
    }
    
    std::vector <int> notmajor = {1, 3, 6, 8, 10};
    bool nonecheck = false;
    for (int i=0; i<12; i++){
        bool fail = false;
        for (int k: notmajor){
            if (found[(i + k) % 12]){
                fail = true;
                break;
            }
        }
        if (!fail){
            std::cout << key[i] << ' ';
            nonecheck = true;
        }
    }
    
    if (!nonecheck){
        std::cout << "none";
    }
}