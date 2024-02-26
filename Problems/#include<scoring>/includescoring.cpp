#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool compare(vector<int> arr1, vector<int> arr2){
    if (arr1[0] != arr2[0]){
        // amount of problems solved
        return (arr1[0] > arr2[0]);
    }
    else if (arr1[1] != arr2[1]){
        // time penalty
        return (arr1[1] < arr2[1]);
    }
    else if (arr1[2] != arr2[2]){
        // time of last finished problem
        return (arr1[2] < arr2[2]);
    }

    else{
        // in case of tie, sort on index
        return (arr1[4] < arr2[4]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<vector<int>> LTH_participants;

    for (int i=0; i<n; i++){
        int s, p, f, o;

        cin >> s >> p >> f >> o;

        vector<int> participant = {s, p, f, o, i, 0, 0};
        LTH_participants.push_back(participant);
    }

    if (n == 1){
        cout << LTH_participants[0][3] + 100;
        return 0;
    }

    sort(LTH_participants.begin(), LTH_participants.end(), compare);

    // assign score

    vector<int> points = {100, 75, 60, 50, 45, 40, 36, 32, 29, 26, 24, 22, 20, 18, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int previous = 0; // Keep track on index of first tied person
    float total = 0; // Keep track on score accumulated of tied people
    bool tie = false;
    for (int i=1; i<n; i++){
        if (i > 30 && !tie){
            break;
        }
        if (((LTH_participants[previous][0] != LTH_participants[i][0]) || (LTH_participants[previous][1] != LTH_participants[i][1]) || (LTH_participants[previous][2] != LTH_participants[i][2])) && previous != i){
            if (!tie){
                LTH_participants[previous][6] = points[i-1];
                previous = i;
            }

            else{
                // Distribute points to tied people
                if (i<=30){
                    total += points[i-1];
                }

                float rounded_up_value = ceil(total/(i-previous));
                for (int j = previous; j < i; j++){
                    LTH_participants[j][6] = rounded_up_value;
                }
                
                total = 0;
                tie = false;
                previous = i;
            }
        }
        else{
            if (i<=30){
                total += points[i-1];
                tie = true;
            }
        }
    }

    // Handle last number
    if (!tie && n <= 30){
        LTH_participants[n-1][6] = points[n-1];
    }
    else{
        if (n<=30){
            total += points[n-1];
        }

        float rounded_up_value = ceil(total/(n-previous));
        for (int j = previous; j < n; j++){
            LTH_participants[j][6] = rounded_up_value;
        }
    }
    
    vector<int> result (n);

    for (int i=0; i<n; i++){
        // Order back into correct positions
        result[LTH_participants[i][4]] = LTH_participants[i][6] + LTH_participants[i][3];
    }
    
    for (vector<int>::iterator it = result.begin(); it != result.end(); it++){
        cout << *it << '\n';
    }
}


/* Test
35
77 7 3 0
35 7 5 0
78 7 3 0
90 7 5 1
76 7 3 0
32 7 5 0
40 7 5 0
90 7 3 1
30 7 5 0
37 7 5 0
31 7 5 0
30 7 5 0
79 7 3 0
80 6 3 0
38 7 5 0
30 7 5 0
30 7 5 0
30 7 5 0
80 7 3 0
30 7 5 0
90 7 4 0
73 7 3 0
75 7 3 0
90 5 3 0
80 7 3 0
74 7 3 0
80 5 3 0
1 1 1 0
39 7 5 0
34 7 5 0
33 7 5 0
30 7 5 0
30 7 5 0
80 7 4 1
36 7 5 0

Results
22
9
24
51
20
6
14
76
2
11
5
2
26
40
12
2
2
2
34
2
60
15
18
100
34
16
45
0
13
8
7
2
2
30
10
*/