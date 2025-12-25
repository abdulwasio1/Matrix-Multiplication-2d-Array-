#include<iostream>
#include<vector>
using namespace std;
int print_unique_value(vector<int>&nums){
    int ans = 0;
    for(int value: nums){
        ans ^= value;
    }
    /*
  ans = 0 ^ 4 = 4
        4 ^ 1 = 5
        5 ^ 2 = 6
        6 ^ 1 = 5
        5 ^ 2 = 4
    */
    //using property of XOR n^n = 0 and n^0 = n
    return ans;
}
int main(){
    vector<int> nums = {4,2,1,2,1};
    cout<<print_unique_value(nums);
}
