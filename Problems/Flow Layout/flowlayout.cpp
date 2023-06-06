#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    while (true){
        int width;
        cin >> width;

        if (width == 0){
            return 0;
        }

        int row_w = 0, row_h = 0; // Row width and height

        int window_w = 0, window_h = 0; // Window width and height

        while (true){
            int w, h;
            cin >> w >> h;

            if (w == -1 && h == -1){
                window_h += row_h; // Add the final height of the row
                break;
            }

            if (row_w + w > width){ // If row is longer than max width
                row_w = w;
                window_h += row_h;
                row_h = h;
            }

            else{
                if (row_w + w > window_w){ // Check max width
                    window_w = row_w + w;
                }
                if (h > row_h){ // Check max height in row
                    row_h = h;
                }

                row_w += w;
            }
        }
        cout << window_w << " x " << window_h << '\n';
    }
}