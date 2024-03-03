// Cardano Triplets that exist such that (a +b + c) <= 100
// so Cardano formula is cube root of (a + b*sqrt(c)) + cube root of (a - b*sqrt(c)) = 1
// Another way to write this without use of float maths is
// 8(a*a*a) + 15(a*a) + 6a - 27(b*b)c = 0


#include <iostream>
#include <cmath>

using namespace std;

bool isCardanoTriplet(int a, int b, int c) {
	int eight = 8 * a * a * a;
	int fifteen = 15.0 * a * a;
	int six = 6.0 * a;
	int twentyseven = 27.0 * b * b * c;
	int abc = eight + fifteen + six - twentyseven;

	if (abc == 1)
		return true;
	else
		return false;
}

int main() {
	int count = 0;
	for (int a = 1; a <= 100; a++) {
		for (int b = 1; b <= 100; b++) {
			for (int c = 1; c <= 100; c++) {
				if (a + b + c <= 100) {
					if (isCardanoTriplet(a, b, c)) {
						cout << "Cardano Triplet " << count << " : " << a << ", " << b << ", " << c << endl;
						count++;
					}
				}
			}
		}
	}
	cout << "Total Number of Cardano triplets : " << count << endl;
	return 0;
}
