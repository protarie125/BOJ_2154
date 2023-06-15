#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;

	auto oss = ostringstream{};
	for (auto i = 1; i <= n; ++i) {
		oss << i;
	}

	auto fss = ostringstream{};
	fss << n;
	auto f = static_cast<string>(fss.str());

	auto str = static_cast<string>(oss.str());
	for (auto i = 0; i < str.length(); ++i) {
		if (str.substr(i, f.length()) == f) {
			cout << i + 1;
			break;
		}
	}

	return 0;
}