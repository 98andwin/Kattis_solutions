#include <iostream>
int main(){
     int n;
     std::string a, b;
     
     std::cin >> n >> a >> b;
     
     if (n%2==0){
         if (a == b){
             std::cout << "Deletion succeeded";
         }
         else{
             std::cout << "Deletion failed";
         }
     }
     
     else{
        for (int i=0; i<a.size(); i++){
            if (a[i] == b[i]){
                std::cout << "Deletion failed";
                return 0;
            }
        }
        std::cout << "Deletion succeeded";
     }
 }