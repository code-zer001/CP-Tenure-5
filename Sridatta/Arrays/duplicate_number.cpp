//Code for faster execution time
int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
//Solution Code
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate = nums[0];
        int tortoise = nums[0];
        int hare = nums[0];

        while(true){
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
            if(tortoise == hare){
                break;
            }
        }
        tortoise = nums[0];
        while(tortoise != hare){
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return tortoise;
    }
};