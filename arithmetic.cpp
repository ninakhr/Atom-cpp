#include <iostream>
using namespace std;

int main() {
	int a1, d, n, sum=0;
	cin >> a1 >> d >> n;
	for (int i = 0; i < n; i++) {
		sum += a1 + (d*n - d);
	}	
	cout << sum;
	return 0;
}
