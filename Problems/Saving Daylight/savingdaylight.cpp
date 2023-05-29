#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true){
        string month, day, year, first, second;
        cin >> month >> day >> year >> first >> second;

        int c = cin.peek();
        if (c == -1){
            return 0;
        }
        int pos = second.find(':');
        int hour = stoi(second.substr(0, pos));
        int min = stoi(second.substr(pos+1));

        pos = first.find(':');
        hour -= stoi(first.substr(0, pos));
        min -= stoi(first.substr(pos+1));

        if (min < 0){
            hour--;
            min += 60;
        }

        cout << month << ' ' << day << ' ' << year << ' ' << hour << " hours " << min << " minutes\n";
    }
}