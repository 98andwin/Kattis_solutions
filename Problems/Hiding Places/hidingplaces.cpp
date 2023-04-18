#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::vector <int> queue = {};
        std::vector <std::vector<int>> map (8, std::vector <int> (8));
        char a;
        int y;
        
        std::cin >> a >> y;
        
        int x = a - 96;
        
        queue.push_back(x*10+y);
        map[x-1][y-1] = 1;
        int count = 0;
        
        
        std::vector <int> children = {};
        while(true){
            for (int i=0; i<queue.size(); i++){
                int value = queue[i];
                
                y = value % 10;
                x = (value-y)/10;
                
                
                if (x-2>=0 && y-3>=0){
                    if (!map[x-2][y-3]){
                        map[x-2][y-3] = 1;
                        children.push_back((x-1)*10+y-2);
                    }
                }
                
                if (x<map.size() && y-3>=0){
                    if (!map[x][y-3]){
                        map[x][y-3] = 1;
                        children.push_back((x+1)*10+y-2);
                    }
                }
                
                if (x-2>=0 && y+1<map[0].size()){
                    if (!map[x-2][y+1]){
                        map[x-2][y+1] = 1;
                        children.push_back((x-1)*10+y+2);
                    }
                }
                
                if (x<map.size() && y+1<map[0].size()){
                    if (!map[x][y+1]){
                        map[x][y+1] = 1;
                        children.push_back((x+1)*10+y+2);
                    }
                }
                
                if (x-3>=0 && y-2>=0){
                    if (!map[x-3][y-2]){
                        map[x-3][y-2] = 1;
                        children.push_back((x-2)*10+y-1);
                    }
                }
                
                if (x+1<map.size() && y-2>=0){
                    if (!map[x+1][y-2]){
                        map[x+1][y-2] = 1;
                        children.push_back((x+2)*10+y-1);
                    }
                }
                
                if (x-3>=0 && y<map[0].size()){
                    if (!map[x-3][y]){
                        map[x-3][y] = 1;
                        children.push_back((x-2)*10+y+1);
                    }
                }
                
                if (x+1<map.size() && y<map[0].size()){
                    if (!map[x+1][y]){
                        map[x+1][y] = 1;
                        children.push_back((x+2)*10+y+1);
                    }
                }
            }
            
            if (children.size() == 0){
                break;
            }
            
            else{
                count += 1;
                queue = children;
                children = {};
            }
        }
        
        std::vector <std::vector<int>> order (8, std::vector <int> (8));
        for (int i=0; i<queue.size(); i++){
            x = (queue[i] % 10) - 1;
            y = (queue[i]-(queue[i]%10))/10 - 1;
            order[x][y] = queue[i];
        }
        
        std::cout << count << ' ';
        for (int i=order.size()-1; i>=0; i--){
            for (int j=0; j<order.size(); j++){
                if (order[i][j] != 0){
                    int res = order[i][j];
                    char letter = (res-(res%10))/10 + 96;
                    std::cout << letter << (res%10) << ' ';
                }
            }
        }
        std::cout << '\n';
    }
}