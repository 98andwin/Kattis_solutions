#include <iostream>
#include <string>
using namespace std;

int main(){
    while (true){
        string info;
        getline(cin, info);
        if (info.size() == 0){
            break;
        }
        double sum = 0;
        string name = "";
        int begin = 0;
        int count = 0;
        if (info[0] >= '0' && info[0] <= '9'){
            for (int i=0; i<info.size(); i++){
                if (info[i] == ' '){
                    double value = stod(info.substr(begin, i-begin));
                    sum += value;
                    begin = i+1;
                    count += 1;
                }
                else if ((info[i] < '0' || info[i] > '9') && info[i] != '.'){
                    name = info.substr(i, info.size());
                    break;
                }
            }
        }
        else{
            for (int i=0; i<info.size(); i++){
                if (info[i] >= '0' && info[i] <= '9'){
                    name = info.substr(0, i);
                    begin = i;
                    break;
                }
            }
            for (int i=begin; i<info.size(); i++){
                if (info[i] == ' '){
                    double value = stod(info.substr(begin, i-begin));
                    sum += value;
                    begin = i+1;
                    count += 1;
                }
                else if (i == info.size()-1){
                    double value = stod(info.substr(begin, info.size()));
                    sum += value;
                    begin = i+1;
                    count += 1;
                }
            }
        }
        cout << sum/count << ' ' << name << '\n';
    }
}