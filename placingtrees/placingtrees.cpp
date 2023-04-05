#include <iostream>
#include <ios>
#include <map>
#include <cstring>
#include <stdio.h>
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

    while (*stdinPos >= '0' && *stdinPos <= '9') {
        x *= 10;
        x += *stdinPos - '0';
        ++stdinPos;
    }
    ++stdinPos;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    readInt(n);

    map <int, int> order;
    for (int i=0; i<n; i++){
        int value;
        readInt(value);
        auto it = order.find(value);

        if (it == order.end()){
            order[value] = 1;
        }
        else{
            (it->second) += 1;
        }
    }
    int max = 0;
    int count = 1;
    for (map <int, int>::iterator it = --order.end(); it != order.begin(); it--){
        if ((it->first) + (it->second) + count > max){
            max = (it->first) + (it->second) + count;
        }
        count += (it->second);
    }
    if ((order.begin()->first) + (order.begin()->second) + count > max){
        max = (order.begin()->first) + (order.begin()->second) + count;
    }
    printf("%i", max);
}