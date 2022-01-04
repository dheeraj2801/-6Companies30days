class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        
        for(string s:string_list){
            string t=s;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
        }
        for(auto it:mp)
        ans.push_back(it.second);
        return ans;
    }
};
