#include <iostream>

int main(){
    std::string name;
    std::string end;
    
    std::cin >> name >> end;
    std::string::iterator it = name.end()-1;
    
    if (*it == 'a' || *it == 'i' || *it == 'o' || *it == 'u'){
        std::cout << name.substr(0, name.size()-1) << "ex" << end;
    }
    
    else if (*it == 'e'){
        std::cout << name << "x" << end;
    }
    
    else if (name.substr(name.size()-2, 2) == "ex"){
        std::cout << name << end;
    }
    
    else{
        std::cout << name << "ex" << end;
    }
}