#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int m, a, b, c;
		std::cin >> m >> a >> b >> c;
		int ans = 0, rem = 0;

		ans += std::min(m, a); rem += m - std::min(m, a);
		ans += std::min(m, b); rem += m - std::min(m, b);
		ans += std::min(rem, c);

		std::cout << ans << "\n";
	}	
}
