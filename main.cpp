#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto& n = s.length();
	auto x = char{ 0 };
	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		if (s[i] != x) {
			ans += 10;
		}
		else {
			ans += 5;
		}

		x = s[i];
	}

	cout << ans;

	return 0;
}