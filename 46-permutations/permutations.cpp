class Solution {
public:
   void setPermute(vector<int>& nums,vector<vector<int>>& newVector,int level=0){
          if(level==nums.size()){
            newVector.push_back(nums);
            return;
          }
          for(int i=level;i<nums.size();i++){
             swap(nums[i],nums[level]);
             setPermute(nums,newVector,level+1);
             swap(nums[i], nums[level]);

          }
   }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> vc;
         int size=nums.size();
         setPermute(nums,vc);
         return vc;
    }
};