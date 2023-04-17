#include <iostream>
#include <vector>

int main(){
    int n;
    int p;
    
    std::cin >> n >> p;
    
    std::vector <std::vector<int>> queue (p, std::vector <int> {0, 0, 0});
    
    
    
    int turn = p-1; //för att vi ska kunna starta på första
    bool second = false;
    while (true){
        /*
        std::cout << "Turn: " << turn << " Second: " << second << '\n';
        for (std::vector<int> arr : queue){
            for(int k : arr){
                std::cout << k << ' ';
            }
            std::cout << '\n';
        }
        std::cout << '\n';
        */
        int sum = 0;
        for (std::vector<int> arr : queue){
            if (arr[0]!=2){
                sum +=1;
            }
        }
        
        if (sum == 1){
            for (int i=0; i<queue.size(); i++){
                if (queue[i][0]!=2){
                    std::cout << i+1;
                    return 0;
                }
            }
        }
        
        int counter = n;
        
        while (counter > 0){
            //std::cout << "Counter: " << counter << " Turn: " << turn << " Second: " << second << '\n';
            if(queue[turn][0] == 0){
                turn = (turn + 1) % p;
                counter -= 1;
            }
            
            else if(queue[turn][0] == 1){
                if(second){
                    if(queue[turn][2] != 2){
                        second = false;
                        turn = (turn + 1) % p;
                        counter -= 1;
                    }
                    else{
                        second = false;
                        turn = (turn + 1) % p;
                    }
                }
                else{
                    if(queue[turn][1] == 2){
                        second = true;
                    }
                    
                    else{
                        second = true;
                        counter -= 1;
                    }
                }
            }
            
            else if(queue[turn][0] == 2){
                turn = (turn + 1) % p;
            }
            
        }
        
        while(true){
            if(queue[turn][0] == 1){
                if (!second && queue[turn][1]==2){
                    second = true;
                }
            
                if (second && queue[turn][2]==2){
                    second = false;
                    turn = (turn + 1) % p;
                    continue;
                }
            }
            
            if(queue[turn][0] == 2){
                turn = (turn + 1) % p;
            }
            else{
                break;
            }
        }
        
        
        if(queue[turn][0] == 0){
            queue[turn][0] = 1;
            second = false;
            
            while(true){
                turn = (turn - 1);
                if(turn < 0){
                    turn += p;
                }
                
                if (queue[turn][0] == 0){
                    break;
                }
                
                else if (queue[turn][0] == 1){
                    if(queue[turn][2] != 2){
                        second = true;
                    }
                    break;
                }
            }
        }
        
        else if(queue[turn][0] == 1){
            if(!second){
                queue[turn][1] += 1;
                if(queue[turn][1] == 2){
                    if(queue[turn][2] == 2 && queue[turn][1] == 2){
                        queue[turn][0] += 1;
                        second = false;
                    }
                    //second = true;
                    while(true){
                        turn = (turn - 1);
                        if(turn < 0){
                            turn += p;
                        }
                        
                        if (queue[turn][0] == 0){
                            break;
                        }
                        
                        else if (queue[turn][0] == 1){
                            if(queue[turn][2] != 2){
                                second = true;
                            }
                            break;
                        }
                    }
                }
                
            }
            else if(second){
                queue[turn][2] += 1;
                if(queue[turn][2] == 2){
                    if(queue[turn][1] == 2){
                        queue[turn][0] += 1;
                        second = false;
                        
                        while(true){
                            turn = (turn - 1);
                            if(turn < 0){
                                turn += p;
                            }
                            
                            if (queue[turn][0] == 0){
                                break;
                            }
                            
                            else if (queue[turn][0] == 1){
                                if(queue[turn][2] != 2){
                                    second = true;
                                }
                                break;
                            }
                        }
                    }
                    else{
                        second = false;
                    }
                }
            }
        }
        
        while(true){
            if(queue[turn][0] == 1){
                if (!second && queue[turn][1]==2){
                    second = true;
                }
            
                if (second && queue[turn][2]==2){
                    second = false;
                    turn = (turn + 1) % p;
                    continue;
                }
            }
            
            if(queue[turn][0] == 2){
                turn = (turn + 1) % p;
            }
            else{
                break;
            }
        }
        
    }
}