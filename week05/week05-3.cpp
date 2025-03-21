// week05-3.cpp
// Leetcode 2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {}; //大括號裡，沒寫完的，會放0
        for(int i=0; i<nums.size(); i++){
            int now = nums[i];//把一堆牌，照著花色放好
            a[now]++;// 照著花色 now 數字，放好加一
        }
        for(int i=1; i<=500; i++){//逐一檢查花色
            if( a[i]%2==1 ) return false;//奇數? 失敗!
        }
        return true;
    }
};
