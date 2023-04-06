#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    getline(cin, line);

    bool happy = false;
    bool sad = false;
    for (int i=0; i<line.size()-1; i++){
        string emote = line.substr(i, 2);

        if (emote == ":("){
            sad = true;
        }
        else if (emote == ":)"){
            happy = true;
        }
    }

    if (happy && sad){
        cout << "double agent";
    }
    else if (happy){
        cout << "alive";
    }
    else if (sad){
        cout << "undead";
    }
    else{
        cout << "machine";
    }
}