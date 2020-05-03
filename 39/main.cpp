class Solution {
public:
    void DFS(vector<int>& candidates, int target,int nowsum,int index,vector<int>&temp,vector<vector<int>> &res)
    {
        if(nowsum>target)
            return;
        if(nowsum==target)
        {
            res.push_back(temp);
            return;
        }
        for(int i=index;i<candidates.size();++i)
        {
            temp.push_back(candidates[i]);
            DFS(candidates,target,nowsum+candidates[i],i,temp,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        int nowsum=0,index=0;
        vector<int>temp;
        DFS(candidates,target,nowsum,index,temp,res);
        return res;
    }
};