class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = INT_MIN;
        int n = colors.size();
        vector<int> ns;
        for(int i = 0;i<colors.size();i++){
            if(colors[i]!=colors[n-1]){
                ans = max(ans,n-i-1);
            }
        }
        for(int i = n-1;i>=0;i--){
            if(colors[i]!=colors[0]){
                ans = max(ans,i);
            }
        }
        return ans;
    }
};