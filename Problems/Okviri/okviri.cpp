#include <iostream>
#include <ios>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string text;
    cin >> text;

    string row = "";
    for (int i=0; i<text.size(); i++){
        if (i == 0){
            row += "..#..";
        }

        else{
            row.pop_back();
            if (i % 3 != 2){
                row += "..#..";
            }
            else{
                row += "..*..";
            }
        }
    }
    cout << row << '\n';

    row = "";
    for (int i=0; i<text.size(); i++){
        if (i == 0){
            row += ".#.#.";
        }

        else{
            row.pop_back();
            if (i % 3 != 2){
                row += ".#.#.";
            }
            else{
                row += ".*.*.";
            }
        }
    }
    cout << row << '\n';
    //God this is ugly...
    row = "";
    for (int i=0; i<text.size(); i++){
        if (i == 0){
            row += "#.";
            row += text[i];
            row += ".#";
        }

        else{
            row.pop_back();
            if (i % 3 != 2){
                if (i%3 == 0 && i != 0){
                    row += "*.";
                    row += text[i];
                    row += ".#";
                }
                else{
                    row += "#.";
                    row += text[i];
                    row += ".#";
                }
            }
            else{
                row += "*.";
                row += text[i];
                row += ".*";
            }
        }
    }
    cout << row << '\n';

    row = "";
    for (int i=0; i<text.size(); i++){
        if (i == 0){
            row += ".#.#.";
        }

        else{
            row.pop_back();
            if (i % 3 != 2){
                row += ".#.#.";
            }
            else{
                row += ".*.*.";
            }
        }
    }
    cout << row << '\n';

    row = "";
    for (int i=0; i<text.size(); i++){
        if (i == 0){
            row += "..#..";
        }

        else{
            row.pop_back();
            if (i % 3 != 2){
                row += "..#..";
            }
            else{
                row += "..*..";
            }
        }
    }
    cout << row;
}