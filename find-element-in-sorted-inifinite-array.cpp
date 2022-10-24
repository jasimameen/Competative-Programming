/* 
find element in Infinate Array

Amazon Interview Question
*/



vector<int> findRange(vector<int>& nums, int& target) {
	int start = 0, end = 1;
	while (nums[end] < target) {
		int temp = end + 1;
		end = end + (end - start + 1) * 2;
		start = temp;
	}

	return {start, end};
}

int binary_search(vector<int>& nums, int& start, int& end, int& target) {
	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (target == nums[mid]) return mid;
		if (target < nums[mid]) end = mid - 1;
		else start = mid + 1;
	}
	return -1;
}


int findInInfinite(vector<int>& nums, int& target) {
	vector<int> range = findRange(nums, target);

	int ans = binary_search(nums, range[0], range[1], target);
}