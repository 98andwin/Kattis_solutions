#include <iostream>
#include <ios>
#include <cstring>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int amount;
    readInt(amount);
    
    vector <int> array {};
    
    for (int i=0; i<amount; i++){
        int value;
        readInt(value);
        array.push_back(value);
    }
    
    for (int i=array.size()-1; i>=0; i--){
        cout << array[i] << '\n';
    }
}

//Code before main is an int parser, only used to make the code even faster than usual