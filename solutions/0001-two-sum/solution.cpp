class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hafiza;

        for (int i = 0; i < nums.size(); i++){
            int suAnkiSayi = nums[i];
            int arananFark = target - suAnkiSayi;

            if (hafiza.find(arananFark) != hafiza.end()){
                return {hafiza[arananFark], i};
            }
            hafiza[suAnkiSayi] = i;
        }
        return {};
    }
};
