/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/

//bruteforce
#include <iostream>
#include <vector>

int main(){
    int target{8}, i, j;
    std::vector<int> nums{1, 2, 3, 4, 8};
    for (i = 0; i < nums.size(); i++){
        for (j = i + 1; j < nums.size(); j++){
            if (nums[i] + nums[j] == target){
                std::cout<<"Hasilnya = "<<"["<<i<<","<<j<<"]";
                return 0;  
                
            }
        }
    }

}

// for (int i;i <=....; i+=) / 
// i hanya di deklarasikan di loop saja

// int a[2];         //int i =5, int j = 1;
// a = {1,2}; error  //a[2]{i, j};          benar

// untuk menggunakan size harus #include <vector> / #include <array>

// sizeof(nums)/sizeof(nums[0]) atau 4*4/4