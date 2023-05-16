#include <iostream>
#include <ios>
#include <map>
#include <string>
using namespace std;

typedef pair<string, int> animal_pair;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;

    while (true){
        map<string, int> animals;
        string n;
        getline(cin, n);
        int amount = stoi(n);

        if (amount == 0){
            return 0;
        }

        for (int i=0; i<amount; i++){
            string text;
            getline(cin, text);

            for (int j=text.size()-1; j>=0; j--){
                if (text[j] == ' '){
                    text = text.substr(j+1);
                    break;
                }
            }
            for (int k=0; k<text.size(); k++){
                int index = text[k];
                if (index >= 65 && index <= 90){
                    text[k] = index + 32;
                }
            }

            auto it = animals.find(text);
            if (it == animals.end()){
                animals.insert(animal_pair(text, 1));
            }
            else{
                (it->second)++;
            }
        }

        cout << "List " << count << ":\n";
        for (map<string, int>::iterator it = animals.begin(); it != animals.end(); it++){
            cout << (it->first) << " | " << (it->second) << '\n';
        }
        count++;
    }
}