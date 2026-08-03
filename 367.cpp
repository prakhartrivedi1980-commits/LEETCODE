class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int left =1;
        long long int right = num;
        //int mid;
        while(left<=right)
        {
            long long mid = (left) + (right-left)/2;
            long long int square = mid*mid;
            if(square == num) return true;

            else if(square<num)
            {
                left = mid+1;
            }
            else 
            {
                right =mid-1;
            }
        }
        return false;
        }        
};