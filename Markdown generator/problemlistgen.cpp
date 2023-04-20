#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

string markdownstring_generator (string& problem_name){

    for (string::iterator it = problem_name.end()-1; it >= problem_name.begin(); it--){
        // Erase everything before and including the last '/'
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

    return "https://github.com/98andwin/Kattis_solutions/tree/main/Problems/" + problem_pathname;
}


int main(){
    // Finding the path name
    string path = fs::current_path();
    for (string::iterator it = path.end()-1; it >= path.begin(); it--){
        // Erase everything after and including the last '/'
        if (*it == '/'){
            path.erase(it, path.end());
            break;
        }
    }
    path += "/Problems";
    auto file_it = fs::directory_iterator(path);

    ofstream myfile;
    myfile.open("script.md", ios::out | ios::trunc);


    myfile << "| Problem Name | Hints | Solutions |" << '\n';
    myfile << "| :--: | :--: | :--: |" << '\n';

    // Go through all the paths in ./Problems
    for (auto const& entry : file_it){
        string folder_path = entry.path();
        string problem_name = folder_path;
        string kattis_path = markdownstring_generator(problem_name);


        // Skip the stupid .DS_store file / check if it is a directory
        if (!entry.is_directory()){
            continue;
        }

        string cpp_name;
        // Find the .cpp file in the problems directory
        auto child_it = fs::directory_iterator(folder_path);
        for (auto const& child : child_it){
            string child_name = child.path();
            if (child_name.substr(child_name.size()-4, 4) == ".cpp"){
                cpp_name = child_name;
                break;
            }
        }

        for (string::iterator it = cpp_name.end()-1; it >= cpp_name.begin(); it--){
            // Erase everything before and including the last '/'
            if (*it == '/'){
                cpp_name.erase(cpp_name.begin(), it+1);
                break;
            }
        }

        myfile << '|' << problem_name << '|' << "[Hint](" << kattis_path << "/Hints.txt)" << '|' << "[Solution](" << kattis_path << '/' << cpp_name << ')' << '\n';
    }

    myfile.close();
}