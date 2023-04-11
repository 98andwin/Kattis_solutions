#include <iostream>
#include <vector>

int main(){
    std::vector <int> days {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    
    int a;
    int b;
    
    std::cin >> a >> b;
    int sum = 0;
    for (int i=0; i<b; i++){
        sum += days[i];
    }
    sum = (sum + 2 + a) % 7;
    
    std::vector <std::string> name {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    std::cout << name[sum];
}