#include <iostream>
using namespace std;
int main()
{
	int vertices;
	cin >> vertices;
	int counter = 0;
	for (int i = 0; i < vertices; ++i) {
		int cnt = 0;
		int a;
		for (int j = 0; j < vertices; ++j) {
			cin >> a;
			if (a) ++cnt;
		}
		if (cnt == 1) ++counter;
	}
	cout << counter;
    return 0;
}

