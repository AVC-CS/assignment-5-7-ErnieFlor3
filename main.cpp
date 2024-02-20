#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N;

	cin >> n1 >> n2;
	cin >> N;

	/***************************************************
	 * Code your program here
	 **************************************************	*/

	cout << n1 << " " << n2 << " ";

	for (int i = 2; i < N; i++) {
		int nextNum = n1 + n2;
		cout << nextNum << " ";

		n1 = n2;
		n2 = nextNum;
	}

	return 0;
}
