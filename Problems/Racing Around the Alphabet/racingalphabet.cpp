#include <iostream>

int main(){
    std::string str_amount;
    getline(std::cin, str_amount);
    int amount = std::stoi(str_amount);
    const double dis = 60*3.14159265/28;
    std::cout.precision(10);
    for (int i=0; i<amount; i++){
        double sum = 1;
        
        std::string text;
        getline(std::cin, text);
        
        char first = text[0];
        char second;
        
        for(int i=1; i<text.size(); i++){
            second = text[i];
            if (second == '\n'){
                break;
            }
            
            if (first == second){
                sum += 1;
                continue;
            }
            
            int f_dis = (int) first;
            int s_dis = (int) second;
            if (f_dis == 32){
                f_dis = 27;
            }
            else if (f_dis == 39){
                f_dis = 28;
            }
            else{
                f_dis -= 64;
            }
            
            if (s_dis == 32){
                s_dis = 27;
            }
            else if (s_dis == 39){
                s_dis = 28;
            }
            else{
                s_dis -= 64;
            }
            
            double diff;
            
            if(f_dis < s_dis){
                diff = s_dis - f_dis;
            }
            else{
                diff = 28-(f_dis - s_dis);
            }
            
            if (diff > 14){
                diff = 28 - diff;
            }
            
            sum += (diff*dis/15) + 1;
            
            first = second;
        }
        std::cout << sum << '\n';
    }
}