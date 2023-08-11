// Time Complexity -> O(N)
// Space Complexity -> O(1)     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         
        int largest = -1, secondLargest = -1;
        
        for(int i = 0; i < sizeOfArray; ++i)
        {
            if(arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondLargest and arr[i] < largest)
            {
                secondLargest = arr[i];
            }
        }
        
        return {largest, secondLargest};
    }
};
