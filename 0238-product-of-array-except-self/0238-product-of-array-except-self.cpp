class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length (nums.size());
        vector<int> products(length, 1);
        products[0] = 1;
        for(int i = 1; i < length; i++){
            products[i] = products[i-1]*nums[i-1];
        }
        int right = 1;
        for(int i = length-1; i >= 0; i--){
            products[i] *= right;
            right *= nums[i];
        }
        return products;
    }
};