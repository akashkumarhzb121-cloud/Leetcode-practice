class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return {};

        vector<int>copy=arr;
        sort(copy.begin(),copy.end());

        unordered_map<int,int>rankmap;

        int rank=1;
        for(int num:copy){
            if(rankmap.find(num)==rankmap.end()){
                rankmap[num]=rank++;
            }
        }

        for(int i=0;i<arr.size();i++){
            arr[i]=rankmap[arr[i]];
        }

        return arr;

    }
};