#include <iostream>
#include <vector>
int main(){
    int s;
    int t;
    int n;
    
    std::cin >> s >> t >> n;
    
    std::vector <int> bus {};
    std::vector <int> walk {};
    std::vector <int> interval {};
    
    
    for (int i=0; i<=n; i++){
        int value;
        std::cin >> value;
        walk.push_back(value);
    }
    
    for (int i=0; i<n; i++){
        int value;
        std::cin >> value;
        bus.push_back(value);
    }
    
    for (int i=0; i<n; i++){
        int value;
        std::cin >> value;
        interval.push_back(value);
    }
    
    int sum = 0;
    
    
    sum += walk[0];
    
    //std::cout << "s: " << s << " t: " << t << " n: " << n << '\n';
    /*
    for (int k: walk){
        std::cout << k << ' ';
    }
    std::cout << '\n';
    for (int k: bus){
        std::cout << k << ' ';
    }
    std::cout << '\n';
    for (int k: interval){
        std::cout << k << ' ';
    }
    std::cout << '\n';
    */
    for (int i=0; i<bus.size(); i++){
        int remainder = sum % interval[i];
        sum += (interval[i]-remainder) % interval[i];
        sum += bus[i];
        sum += walk[i+1];
        /*
        std::cout << "remainder: " << remainder << " bus: " << bus[i] << " walk: " << walk[i+1] << '\n';
        std::cout << "sum: " << sum << '\n';*/
    }
    
    if (sum <= t-s){
        std::cout << "yes";
    }
    else{
        std::cout << "no";
    }
    
}