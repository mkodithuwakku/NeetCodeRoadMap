#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Your implementation here
        set<int> Set;

        //Iterate through vector
        for (size_t i = 0; i < nums.size(); i++){
            
            // If element is not in the array
            if(Set.find(nums[i]) == Set.end()){
                Set.insert(nums[i]);
            } else {
               return true;
            }
        }
        return false;
        // Check if element is in Set

        // If yes return false

        // Else add element to Set
        

    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 3}; // Example input
    cout << boolalpha << solution.containsDuplicate(nums) << endl; // Example usage
    return 0;
}

