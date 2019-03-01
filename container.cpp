#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
	int result = 0, leftIndex = 0, rightIndex = height.size() - 1;
	while (leftIndex < rightIndex) {
		int containerHeight = (height[leftIndex] < height[rightIndex]) ? height[leftIndex] : height[rightIndex];
		int current = (rightIndex - leftIndex ) * containerHeight;
		if (current > result) {
			result = current;
		}
		if (height[leftIndex] > height[rightIndex]) {
			rightIndex--;
		} else {
			leftIndex++;
		}
	}
	return result;
}
int main() {
	vector<int> height;
	int h[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	for (int i = 0; i < 9; ++i) {
		height.push_back(h[i]);
	}
	cout << maxArea(height) << endl;
}
