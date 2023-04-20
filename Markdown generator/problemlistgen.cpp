#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

string markdownstring_generator (string& problem_name){

    for (string::iterator it = problem_name.end()-1; it >= problem_name.begin(); it--){
        // Erase everything behind and including the last '/'
        if (*it == '/'){
            problem_name.erase(problem_name.begin(), it+1);
            break;
        }
    }

    string problem_pathname = problem_name;
    // Replacing spaces with %20
    vector<int> changes;
    for (int i=problem_pathname.size()-1; i >= 0; i--){
        // Add the positions of spaces into vector
        if (problem_pathname[i] == ' '){
            changes.push_back(i);
        }
    }

    for (int k : changes){
        problem_pathname.replace(k, 1, "%20");
    }

    return "https://github.com/98andwin/Kattis_solutions/tree/main/Problems/" + problem_pathname + "/Hints.txt";
}


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
        string kattis_path = markdownstring_generator(problem_name);
        myfile << '|' << problem_name << '|' << "[Hint](" << kattis_path << ')' << '|' << '\n';
    }

    myfile.close();
}