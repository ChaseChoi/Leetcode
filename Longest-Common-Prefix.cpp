#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	int num = strs.size();
	if (num == 0) {
		return "";
	}
	string prefix = strs[0];
	for (int i = 1; i < num; ++i) {
		string current = strs[i];
		if (current.length() == 0 || prefix == "") {
			return "";
		}
		prefix = prefix.substr(0, min(prefix.length(), current.length()));
		for (int j = 0; j < prefix.length(); ++j) {
			if (current[j] != prefix[j]) {
				prefix = prefix.substr(0, j);
				break;
			}
		}
	}
	return prefix;
}
int main() {
	vector<string> input;
	string aa = "aa", a = "a";
	input.push_back(aa);
	input.push_back(a);
	cout << longestCommonPrefix(input) << endl;
}