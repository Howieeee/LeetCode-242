class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> um1, um2;
        for(auto c:s)
            um1[c]++;
        for(auto c:t)
            um2[c]++;
        
        if(um1.size() != um2.size())
            return false;
        for(auto um:um1)
            if(um1[um.first] != um2[um.first])
                return false;
        
        return true;
    }
};
