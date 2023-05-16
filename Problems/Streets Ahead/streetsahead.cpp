#include <iostream>
#include <ios>
#include <unordered_map>
using namespace std;

void getchar_func(string &str)
{
    char c = '0';
    while((c = getchar())  && (c != -1 && c != '\n' && c != '\r' && c != ' '))
    {
        str += c;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    cout << n << ' ' << q << '\n';

    unordered_map<string, int> street;
    street.rehash(200000);

    for (int i=0; i<n; i++){
        string name;
        getchar_func(name);
        cout << name << '\n';
        pair<string, int> cross = {name, i};
        street.insert(cross);
    }

    for (int i=0; i<q; i++){
        string first, second;
        getchar_func(first);
        getchar_func(second);
        int dis_first = (street.find(first) -> second);
        int dis_second = (street.find(second) -> second);
        int res = dis_first - dis_second;
        if (res < 0){
            res *= -1;
        }
        cout << res-1 << '\n';
    }
}