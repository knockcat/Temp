// Time Complexity -> O(n)
// Space Complexity -> O(1)
  
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        
        int ans = INT_MAX;
        
        int xIdx = -1, yIdx = -1;
        
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == x)
                xIdx = i;
            if(a[i] == y)
                yIdx = i;
            if(xIdx != -1 and yIdx != -1)
                ans = min(ans, abs(xIdx - yIdx));
        }
        
        if(xIdx == -1 or yIdx == -1)
            return -1;
            
        return ans;
    }
};
