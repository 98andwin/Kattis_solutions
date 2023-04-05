#include <iostream>
#include <vector>

int main(){
    std::vector <std::vector <int> > map (4, std::vector <int> (4));
    
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            int value;
            std::cin >> value;
            map[i][j] = value;
        }
    }
    int dir;
    std::cin >> dir;
    /*
    std::cout << "före\n";
    for (std::vector<int> k : map){
        for (int l : k){
            std::cout << l << ' ';
        }
        std::cout << '\n';
    }
    */
    
    if (dir == 0){
        for (int i=0; i<4; i++){
            int pos = 0;
            bool merged = false;
            for (int j=1; j<4; j++){
                /*
                std::cout << '\n' << '\n' << "pos: " << pos << " merged: " << merged << " j: " << j << '\n' << "före: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }*/
                if (map[i][j] != 0){
                    if (map[i][j] == map[i][pos] && !merged){
                        map[i][j] = 0;
                        map[i][pos] *= 2;
                        merged = true;
                    }
                    else{
                        if (map[i][pos] == 0){
                            map[i][pos] = map[i][j];
                            map[i][j] = 0;
                            merged = false;
                            continue;
                        }
                        else if (pos+1 != j){
                            map[i][pos+1] = map[i][j];
                            map[i][j] = 0;
                        }
                        merged = false;
                        pos += 1;
                    }
                }
                /*
                std::cout << '\n' << "efter: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }
                std::cout << '\n';
                */
            }
        }
    }
    
    else if (dir == 1){
        for (int j=0; j<4; j++){
            int pos = 0;
            bool merged = false;
            for (int i=1; i<4; i++){
                /*
                std::cout << '\n' << '\n' << "pos: " << pos << " merged: " << merged << " j: " << j << '\n' << "före: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }*/
                if (map[i][j] != 0){
                    if (map[i][j] == map[pos][j] && !merged){
                        map[i][j] = 0;
                        map[pos][j] *= 2;
                        merged = true;
                    }
                    else{
                        if (map[pos][j] == 0){
                            map[pos][j] = map[i][j];
                            map[i][j] = 0;
                            merged = false;
                            continue;
                        }
                        else if (pos+1 != i){
                            map[pos+1][j] = map[i][j];
                            map[i][j] = 0;
                        }
                        
                        merged = false;
                        pos += 1;
                    }
                }
                /*
                std::cout << '\n' << "efter: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }
                std::cout << '\n';
                */
            }
        }
    }
    
    else if (dir == 2){
        for (int i=0; i<4; i++){
            int pos = 3;
            bool merged = false;
            for (int j=2; j>=0; j--){
                /*
                std::cout << '\n' << '\n' << "pos: " << pos << " merged: " << merged << " j: " << j << '\n' << "före: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }*/
                if (map[i][j] != 0){
                    if (map[i][j] == map[i][pos] && !merged){
                        map[i][j] = 0;
                        map[i][pos] *= 2;
                        merged = true;
                    }
                    else{
                        if (map[i][pos] == 0){
                            map[i][pos] = map[i][j];
                            map[i][j] = 0;
                            merged = false;
                            continue;
                        }
                        else if (pos-1 != j){
                            map[i][pos-1] = map[i][j];
                            map[i][j] = 0;
                        }
                        
                        merged = false;
                        pos -= 1;
                    }
                }
                /*
                std::cout << '\n' << "efter: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }
                std::cout << '\n';
                */
            }
        }
    }
    
    else if (dir == 3){
        for (int j=0; j<4; j++){
            int pos = 3;
            bool merged = false;
            for (int i=2; i>=0; i--){
                /*
                std::cout << '\n' << '\n' << "pos: " << pos << " merged: " << merged << " j: " << j << '\n' << "före: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }*/
                if (map[i][j] != 0){
                    if (map[i][j] == map[pos][j] && !merged){
                        map[i][j] = 0;
                        map[pos][j] *= 2;
                        merged = true;
                    }
                    else{
                        if (map[pos][j] == 0){
                            map[pos][j] = map[i][j];
                            map[i][j] = 0;
                            merged = false;
                            continue;
                        }
                        else if (pos-1 != i){
                            map[pos-1][j] = map[i][j];
                            map[i][j] = 0;
                        }
                        
                        merged = false;
                        pos -= 1;
                    }
                }
                /*
                std::cout << '\n' << "efter: ";
                for (int l : map[i]){
                    std::cout << l << ' ';
                }
                std::cout << '\n';
                */
            }
        }
    }
    //std::cout << "efter: \n";
    for (std::vector<int> k : map){
        for (int l : k){
            std::cout << l << ' ';
        }
        std::cout << '\n';
    }
}