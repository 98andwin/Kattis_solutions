#include <iostream>
#include <vector>

int main(){
    std::string tempnumber;
    std::string tempamount;
    
    
    getline(std::cin, tempnumber, ' ');
    getline(std::cin, tempamount);
    //std::cin >> number >> amount;
    int number = std::stoi(tempnumber);
    int amount = std::stoi(tempamount);
    std::vector <int> company (number);
    for (int i=0; i<number; i++){
        int value;
        std::cin >> value;
        company[i] = value;
    }
    
    std::string placeholder;
    getline(std::cin, placeholder);
    for (int i=0; i<amount; i++){
        std::string info;
        getline(std::cin, info);
        int request = std::stoi(info.substr(0,1));
        int j=1;
        int a;
        int b;
        
        while (true){
            if (info[2+j] == ' '){
                a = std::stoi(info.substr(2,j));
                b = std::stoi(info.substr(2+j,info.size()));
                break;
            }
            j++;
        }
        
        if (request == 1){
            company[a-1] = b;
        }
        
        else if(request == 2){
            int res = company[a-1] - company[b-1];
            if (res < 0){
                res *= -1;
            }
            std::cout << res << '\n';
        }
    }
}