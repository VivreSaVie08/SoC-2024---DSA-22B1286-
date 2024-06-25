/*You are required to complete this method*/

class Solution{
    private: 
      int largestRectangleArea(vector < int > & histo) {
      stack < int > st;
      int maxA = 0;
      int n = histo.size();
      for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
          int height = histo[st.top()];
          st.pop();
          int width;
          if (st.empty())
            width = i;
          else
            width = i - st.top() - 1;
          maxA = max(maxA, width * height);
        }
        st.push(i);
      }
      return maxA;
    }

  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
       
       int maximumArea = 0;
       vector<int>histo(m,0);
       
        for (int i = 0 ; i<n ;i++){
            for (int j =0 ; j<m;j++){
                if (M[i][j]==1) histo[j]++ ;
                else histo[j] = 0 ;
            }
            int maxArea = largestRectangleArea(histo);
            maximumArea = max (maximumArea , maxArea);
        }
        return maximumArea;
    }
};