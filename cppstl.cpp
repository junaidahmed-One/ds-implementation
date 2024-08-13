#include<bits/stdc++.h>
using namespace std;



int main() {

	vector<int> v;
	v.push_back(10);
	v.emplace_back(20); //generally fast than push_back


	string s = "231";
	sort(s.begin(), s.end());

	do {
		cout << s << " ";
	} while (next_permutation(s.begin(), s.end()));

	cout << "Vector : " << v[0] << "\n";

	for (auto it : v)
	{
		cout << it << "\n";
	}

	pair<int, int> p[] = {{1, 2}, {3, 4}, {5, 6}};

	cout << p[1].second;

	return 0;
}