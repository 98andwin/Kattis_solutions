#include <iostream>
#include <vector>

int main(){
    std::vector <int> penalty (26, 0);
    std::vector <int> attempt (26, 0);
    std::vector <int> correct (26, 0);
    int total = 0;
    while (true){
        int a;
        char b;
        std::string c;
        std::cin >> a >> b >> c;
        
        if(a == -1){
            int sum = 0;
            for (int k : correct){
                if (k){
                    sum += 1;
                }
            }
            int count = 0;
            for (int i=0; i<penalty.size(); i++){
                if (correct[i]){
                    count += penalty[i] + (attempt[i]-1)*20;
                }
            }
            std::cout << sum << ' ' << count;
            return 0;
        }
        
        total += a;
        
        int index = b;
        index -= 65;
        
        if (c == "wrong"){
            attempt[index] += 1;
        }
        else if (c == "right"){
            penalty[index] = a;
            correct[index] = 1;
            attempt[index] += 1;
        }
        
    }
}