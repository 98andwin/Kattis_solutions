#include <iostream>
#include <vector>

int main(){
    std::vector <int> arr (4);
    
    for (int i=0; i<4; i++){
        int value;
        std::cin >> value;
        arr[i] = value;
    }
    
    for (int i=0; i<3; i++){
        for (int j=i; j<4; j++){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    std::cout << arr[0]*arr[2];
}