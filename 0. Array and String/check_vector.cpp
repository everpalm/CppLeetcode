#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // for (int i = 0; i < 10; i++) {
    //     std::cout << i << std::endl;
    // }
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    double pi = 3.14159265;
    string str = "Hello, World!";
    // std::cout << nums;
    for (int num : nums) {
        cout << "num = " << num << "\n";
        // std::cout << "pi = " << std::fixed << pi << "\n";
        cout << "pi = " << setprecision(4) << pi << "\n";
        cout << "str = " << str << "\n";
        cout << "num = " << num << " ," << "pi = " << setprecision(5) << pi << ", " << "str = " << str << "\n";
        cout << "array[" << num << "] = " << nums[num] << "\n";
        cout << "array[" << num << "] = " << nums.at(num) << "\n";
    }
    // std::cout << std::endl;
}