// Find missing no. in Array
class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        static int sum;
        for (int i = 0; i < n; i++)
        {
            sum = n * (n + 1) / 2;
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum = sum - array[i];
        }
        return sum;
    }
};