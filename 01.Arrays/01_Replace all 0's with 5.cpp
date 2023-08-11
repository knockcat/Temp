// Time Complexity -> O(k) k is number of digits
// Space Complexity -> O(1)

/*you are required to complete this method*/

int reverse(int num)
{
    int ans = 0;
    
    while(num > 0)
    {
        int rem = num % 10;
        
        ans= ans * 10 + rem;
        
        num /= 10;
    }
    
    return ans;
}

int convertFive(int n) {
    // Your code here
    
    int temp = n ;
    
    int num = 0;
    
    while(temp > 0)
    {
        int rem = temp % 10;
        
        if(rem == 0)
        {
            rem = 5;
        }
        
        num = num * 10 + rem;
        
        temp /= 10;
    }
    
    return reverse(num);
}
