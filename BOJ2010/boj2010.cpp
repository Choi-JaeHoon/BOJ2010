// BOJ 2010
// �÷���
// 1Ʈ

#include <iostream>
using namespace std;

int main()
{
	int n;
	int p;
	int sum = 0;
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> p;
		sum += p;
	}
	
	sum = sum - (n - 1);

	cout << sum;
	return 0;
}