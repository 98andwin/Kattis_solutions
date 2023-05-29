#include <iostream>
#include <ios>
#include <stdio.h>
#include <cstring>
#include <map>
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

    int amount;
    readInt(amount);

    map<int, int> schedules;
    int lower = INT32_MAX;
    int upper = 0;
    for (int i=0; i<amount; i++){
        int start, end;
        readInt(start);
        readInt(end);
        auto it = schedules.find(end);

        if (it != schedules.end() && start > (it -> second)){
            (it -> second) = start;
        }

        else{
            // Insert optimizations
            if (start < lower){
                schedules.insert(schedules.begin(), {end, start});
            }
            else if (end > upper){
                schedules.insert(schedules.end(), {end, start});
            }

            else{
                schedules.insert({end, start});
            }

            if (start < lower){
                lower = start;
            }
            if (end > upper){
                upper = end;
            }
        }
    }

    int res = 0;
    int min = 0;
    for (map<int, int>::const_iterator it = schedules.cbegin(); it != schedules.cend(); it++){
        if ((it->second) >= min){
            min = (it -> first);
            res++;
        }
    }
    cout << res;
}