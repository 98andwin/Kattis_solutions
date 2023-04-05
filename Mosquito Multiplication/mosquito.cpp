#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (true){
        int m, p, l, e, r, s, n;
        cin >> m >> p >> l >> e >> r >> s >> n;
        
        int c = cin.peek();
        if (c == EOF){
            break;
        }

        for (int i=0; i<n; i++){
            int ph = m;
            m = (p-(p%s))/s;
            p = (l-(l%r))/r;
            l = e*ph;
        }
        cout << m << '\n';
    }
}