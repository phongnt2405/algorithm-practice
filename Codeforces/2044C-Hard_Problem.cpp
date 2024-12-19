#include <iostream>
#include <array>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		std::array<int, 4> arr;
		for (int& x : arr) std::cin >> x;

		int ans = 0, key = arr[0];
		for (int i = 1; i < 4; i++) {
			if (arr[i] > key) ans += arr[i] - key;
			else ans += arr[i];
		}
		
		std::cout << ans << "\n";
	}	
}
