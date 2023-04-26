#include <iostream>
#include <ios>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int recipes;
    cin >> recipes;
    
    const string seperating_line = string(40, '-');
    cout.setf(std::ios::fixed, std::ios::floatfield);
    cout.precision(1);

    for (int i=0; i<recipes; i++){
        int amount;
        double original, upscaled;

        cin >> amount >> original >> upscaled;
        vector<string> names;
        vector<double> percentages;
        double weight;
        for (int j=0; j<amount; j++){
            string ingredient;
            double value, per;
            cin >> ingredient >> value >> per;
            names.push_back(ingredient);
            percentages.push_back(per);

            if (per == 100.0){
                weight = value;
            }
        }

        double scaling = upscaled / original;
        weight *= scaling;

        cout << "Recipe # " << i+1 << '\n';
        for (int j=0; j<names.size(); j++){
            cout << names[j] << ' ' << weight*percentages[j]/100.0 << '\n';
        }
        
        cout << seperating_line << '\n';
    }
}