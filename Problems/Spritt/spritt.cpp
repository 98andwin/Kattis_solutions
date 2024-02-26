#include <iostream>
#include <ios>
#include <stdio.h>
#include <cstring>
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
    cout.tie(NULL);

    int n, x;

    readInt(n);
    readInt(x);

    if (n >= x){
        // More classrooms than bottles
        cout << "Neibb";
        return 0;
    }

    for (int i=0; i<n; i++){
        int needed;
        readInt(needed);
        x -= needed;

        if (x < 0){
            cout << "Neibb";
            return 0;
        }
    }

    cout << "Jebb";
}