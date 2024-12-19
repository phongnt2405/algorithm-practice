#include <iostream>
#include <array>

int main() {
	std::array<int, 3> arr1;
	std::array<int, 3> arr2;

	for (int& x : arr1) std::cin >> x;
	for (int& x : arr2) std::cin >> x;

	int c1 = 0, c2 = 0;
	std::array<int, 2> ans;

	for (int i = 0; i < 3; i++) {
		if (arr1[i] > arr2[i]) c1++;
		else if (arr1[i] < arr2[i]) c2++;
	}
	ans[0] = c1; ans[1] = c2;

	for (int val : ans) std::cout << val << " ";
}
