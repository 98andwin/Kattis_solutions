#include <iostream>
#include <vector>

int main(){
    std::vector <std::vector<char>> map (8, std::vector<char> (8,  'x'));
    
    std::string white;
    getline(std::cin, white);
    
    std::string content = white.substr(7, white.size());
    
    int count = 0;
    int x;
    int y;
    char letter = ' ';
    for (int i=0; i<content.size(); i++){
        if(count == 0){
            int check = content[i];
            if (check >= 65 && check <= 90){
                letter = content[i];
            }
            else{
                count += 1;
            }
        }
        if (count == 1){
            x = content[i]-97;
        }
        if (count == 2){
            y = content[i]-49;
        }
        if (content[i] == ',' || i == content.size()-1){
            //std::cout << "Letter: " << letter << " x: " << x << " y: " << y << '\n';
            if (letter == ' '){
                map[7-y][x] = 'P';
            }
            else{
                map[7-y][x] = letter;
            }
            count = 0;
            letter = ' ';
            continue;
        }
        count += 1;
    }
    
    std::string black;
    getline(std::cin, black);
    
    content = black.substr(7, black.size());
    count = 0;
    for (int i=0; i<content.size(); i++){
        if(count == 0){
            int check = content[i] + 32;
            if (check >= 97 && check <= 122){
                letter = check;
            }
            else{
                count += 1;
            }
        }
        if (count == 1){
            x = content[i]-97;
        }
        if (count == 2){
            y = content[i]-49;
        }
        if (content[i] == ',' || i == content.size()-1){
            //std::cout << "Letter: " << letter << " x: " << x << " y: " << y << '\n';
            if (letter == ' '){
                map[7-y][x] = 'p';
            }
            else{
                map[7-y][x] = letter;
            }
            count = 0;
            letter = ' ';
            continue;
        }
        count += 1;
    }
    
    std::cout << "+---+---+---+---+---+---+---+---+\n";
    
    for (int i=0; i<map.size(); i++){
        for (int j=0; j<map[i].size(); j++){
            std::cout << '|';
            char fill;
            if ((i+j)%2){
                fill = ':';
            }
            else{
                fill = '.';
            }
            if (map[i][j] != 'x'){
                std::cout << fill << map[i][j] << fill;
            }
            else{
                std::cout << fill << fill << fill;
            }
        }
        std::cout << "|\n+---+---+---+---+---+---+---+---+\n";
    }
}