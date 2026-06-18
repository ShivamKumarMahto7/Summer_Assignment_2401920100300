
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n =  heights.size();
        int ans = 0;

        for(int i = 0; i <= n; i++) {
            int cur;

            if(i == n) {
                cur = 0;
            } else {
                cur =  heights[i];
            }

            while(!s.empty() && cur< heights[s.top()]) {

                int mid = s.top();
                s.pop();
                int height =  heights[mid];
                int right = i;
                int left;

                if(s.empty()) {
                    left = -1;
                  } else {
                    left = s.top();
                  }

                int width = right-left- 1;
                int area = height * width;

                if(area>ans) {
                    ans = area;
                }
            }

         s.push(i);
        }

          return ans;
    }
};
