/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int n)
{
    return 1;
}
class Solution {
public:
    int guessNumber(int num) {
        long long int left = 1;
        long long int right = num;
        long long int mid;
        while(left<=right)
        {
            mid = left + ((right-left)/2);
            if(guess(mid)==0) return mid;
            else if(guess(mid)==1) left = mid+1;
            else right = mid-1;
        }
        return 0;
        
    }
};