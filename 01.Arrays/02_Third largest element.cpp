// Time Complexity -> O(N)
// Space Complexity -> O(1)

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         
         
         int largest, secondLargest, thirdLargest;
         
         largest = secondLargest = thirdLargest = INT_MIN;
         
         
         for(int i = 0; i < n; ++i)
         {
             if(a[i] > largest)
             {
                 thirdLargest = secondLargest;
                 secondLargest = largest;
                 largest = a[i];
             }
             else if(a[i] > secondLargest and a[i] < largest)
             {
                 thirdLargest = secondLargest;
                 secondLargest = a[i];
             }
             else if(a[i] > thirdLargest and a[i] < secondLargest)
             {
                 thirdLargest = a[i];
             }
         }
         
         return thirdLargest;
         
    }

};
