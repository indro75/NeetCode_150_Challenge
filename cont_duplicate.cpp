#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>seen;
        for(int num:nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 2};
    if(sol.hasDuplicate(nums)){
        cout << "Duplicate found!" << endl;
    } else {
        cout << "No duplicates." << endl;
    }
    return 0;
}