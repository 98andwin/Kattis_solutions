#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double diff1 = sqrt(pow(x2-x1, 2.0) + pow(y2-y1, 2.0));
    double diff2 = sqrt(pow(x3-x2, 2.0) + pow(y3-y2, 2.0));

    if (diff1 > diff2){ // p1 p2 is hypotenuse
        double midx = (x1+x2)/2.0;
        double midy = (y1+y2)/2.0;
        cout << x3 + 2*(midx-x3) << ' ' << y3 + 2*(midy-y3);
    }
    else if (diff2 > diff1){ // p2 p3 is hypotenuse
        double midx = (x2+x3)/2.0;
        double midy = (y2+y3)/2.0;
        cout << x1 + 2*(midx-x1) << ' ' << y1 + 2*(midy-y1);
    }
    else{ // p1 p3 is hypotenuse
        double midx = (x1+x3)/2.0;
        double midy = (y1+y3)/2.0;
        cout << x2 + 2*(midx-x2) << ' ' << y2 + 2*(midy-y2);
    }
}