#include <iostream>

int main(){
    int sum = 0;
    int l, h;
    
    std::cin >> l >> h;
    
    for (int i=l; i<=h; i++){
        int test = i;
        bool check = true;
        int arr [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        
        while (test != 0){
            int rem = test%10;
            
            if (rem != 0){
                if (i%rem == 0 && !arr[rem]){
                    test = (test-rem) / 10;
                    arr[rem] = 1;
                }
                else{
                    check = false;
                    break;
                }
            }
            else{
                check = false;
                break;
            }
        }
        if (check){
            sum += 1;
        }
    }
    std::cout << sum;
}