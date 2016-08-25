// 374. Guess Number Higher or Lower
// https://leetcode.com/problems/guess-number-higher-or-lower/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int low = 1;
		int high = n;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			int result = guess(mid);
			if (result == 0) return mid;
			if (result < 0) high = mid - 1;
			else low = mid + 1;
		}
		return -1;
	}
};