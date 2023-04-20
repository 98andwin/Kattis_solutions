#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

int main(){
    string path = "/Users/andreaswingqvist/Kattis_solutions/Problems";
    auto file_it = fs::directory_iterator(path);

    ofstream myfile;
    myfile.open("script.md", ios::out | ios::trunc);


    myfile << "| First | Second |" << '\n';
    myfile << "| :--: | :--: |" << '\n';

    // Go through all the paths in ./Problems
    for (auto const& entry : file_it){
        string folder_path = entry.path();
        string problem_name = folder_path;

        for (string::iterator it = problem_name.end()-1; it >= problem_name.begin(); it--){
            // Erase everything behind and including the last '/'
            if (*it == '/'){
                problem_name.erase(problem_name.begin(), it+1);
                break;
            }
        }
        string kattis_path = "https://github.com/98andwin/Kattis_solutions/tree/main/Problems/" + problem_name + "/Hints.txt";
        myfile << '|' << problem_name << '|' << "[Hint](" << kattis_path << ')' << '|' << '\n';
        //cout << folder_path << '\n';
        //cout << problem_name << '\n' << '\n';
    }
    myfile.close();
}