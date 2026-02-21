#include <iostream>
using namespace std;

vector<int> nextSmaller(vector<int> &m){
    stack<int> s;
    s.push(-1);
    vector<int> ans(m.size());
    for(int i = m.size()-1;i>=0;i--){
        int curr = m[i];
        while(s.top()!=-1&&m[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmaller(vector<int> &m){
    stack<int> s;
    s.push(-1);
    vector<int> ans(m.size());
    for(int i = 0;i<m.size();i++){
        int curr = m[i];
        while(s.top()!=-1&&m[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangle(vector<int> &height){
    int n = height.size();
    vector<int> next(n);
    next = nextSmaller(height);
    vector<int> prev(n);
    prev = prevSmaller(height);
    int ans = INT_MIN;
    for(int i = 0;i<n;i++){
        int len = height[i];
        if(next[i]==-1){
            next[i] = n;
        }
        int width = next[i]-prev[i]-1;
        int area = len*width;
        ans = max(ans,area);
    }
    return ans;
}

int maxArea(vector<vector<int>> &m,int a,int b){
    int area =largestRectangle(m[0]);
    for(int i = 1;i<a;i++){
        for(int j = 0;j<b;j++){
            if(m[i][j]!=0){
                m[i][j] = m[i][j]+m[i-1][j];
            }else{
                m[i][j] = 0;
            }
        }
        area = max(area,largestRectangle(m[i]));
    }
    return area;
}

int main() {
    vector<vector<int>> a = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int ans = maxArea(a,4,4);
    cout<<ans<<endl;
    return 0;
}
