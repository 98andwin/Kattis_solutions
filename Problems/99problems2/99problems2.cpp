#include <cstring>
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;

static char stdinBuffer[1024];
static char* stdinDataEnd = stdinBuffer + sizeof (stdinBuffer);
static const char* stdinPos = stdinDataEnd;

void readAhead(size_t amount)
{
    size_t remaining = stdinDataEnd - stdinPos;
    if (remaining < amount) {
       memmove(stdinBuffer, stdinPos, remaining);
       size_t sz = fread(stdinBuffer + remaining, 1, sizeof (stdinBuffer) - remaining, stdin);
       stdinPos = stdinBuffer;
       stdinDataEnd = stdinBuffer + remaining + sz;
       if (stdinDataEnd != stdinBuffer + sizeof (stdinBuffer))
         *stdinDataEnd = 0;
    }
}

void readInt(int& x)
{
    readAhead(16);
    
    x = 0;
    bool neg = false;
    if (*stdinPos == '-') {
        ++stdinPos;
        neg = true;
    }

    while (*stdinPos >= '0' && *stdinPos <= '9') {
        printf("%c\n", *stdinPos);
        x *= 10;
        x += *stdinPos - '0';
        ++stdinPos;
    }
    ++stdinPos;
    if (neg){
        x *= -1;
    }
    return;
}

int main(){
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, amount;
    readInt(n);
    readInt(amount);
    vector <int> problems (0);
    bool sorted = true;
    int value;
    for (int i=0; i<n; i++){
        readInt(value);
        problems.push_back(value);
    }
    
    sort(problems.begin(), problems.end());
    
    int type;
    for (int i=0; i<amount; i++){
        readInt(type);
        readInt(value);
        
        if (problems.size() == 0){
            cout << "-1\n";
        }
        if (type == 1){
            if (*(--problems.end()) <= value){
                cout << "-1\n";
            }
            else{
                auto lower = lower_bound(problems.begin(), problems.end(), value+1);
                cout << *lower << "\n";
                problems.erase(lower);
            }
        }
        
        else if (type == 2){
            if (*problems.begin() > value){
                cout << "-1\n";
            }
            else{
                auto upper = upper_bound(problems.begin(), problems.end(), value);
                if (upper != problems.end()){
                    cout << *(upper-1) << "\n";
                    problems.erase((upper-1));
                }
                else{
                    cout << *(--problems.end()) << "\n";
                    problems.erase(--problems.end());
                }
            }
        }
    }
}