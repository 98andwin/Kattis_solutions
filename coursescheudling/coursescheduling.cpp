#include <iostream>
#include <ios>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    map<string, set<string>> courses;
    for (int i=0; i<amount; i++){
        string name;
        string text;
        cin >> text;
        name.append(text);
        cin >> text;
        name.append(text);
        string course;
        cin >> course;
        
        map<string, set<string>>::iterator it = courses.find(course);
        if (it == courses.end()){
            set<string> temp;
            temp.insert(name);
            courses[course] = temp;
        }
        else{
            (it -> second).insert(name);
        }
    }
    
    for (map<string, set<string>>::iterator it = courses.begin(); it != courses.end(); it++){
        cout << (it -> first) << ' ' << (it -> second).size() << '\n';
    }
}