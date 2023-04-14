#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    vector <vector <int>> map (2003, vector <int> (2003, 0));
    
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        string shape;
        cin >> shape;
        
        if (shape == "rectangle"){
            int x;
            int y;
            int v;
            int w;
            
            cin >> x >> y >> v >> w;
            
            for (int j=x; j<=v; j++){
                for (int k=y; k<=w; k++){
                    if (1002+j < 2003 && 1002+j >= 0 && 1002+k < 2003 && 1002+k >= 0){
                        map[1002+j][1002+k] += 1;
                    }
                }
            }
        }
        
        else if (shape == "circle"){
            double x;
            double y;
            double r;
            
            cin >> x >> y >> r;
            
            for (int j=-r; j<=r; j++){
                for (int k=-r; k<=r; k++){
                    if (1002+x+j < 2003 && 1002+x+j >= 0 && 1002+y+k < 2003 && 1002+y+k >= 0){
                        double dis = sqrt(pow(j, 2) + pow(k, 2));
                        if (dis <= r){
                            map[1002+x+j][1002+y+k] += 1;
                        }
                    }
                }
            }
        }
    }
    
    cin >> amount;
    for (int i=0; i<amount; i++){
        int x;
        int y;
        cin >> x >> y;
        cout << map[1002+x][1002+y] << '\n';
    }
}