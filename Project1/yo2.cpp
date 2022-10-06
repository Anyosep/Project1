#include <iostream>
#include<cmath>
#include<ctime>
#include <cstdlib>
using namespace std;
int main() {
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (int a = 1; a <= 100; a++) {
		for (int b = 1; b <= 100; b++) {
			for (int c = 1; c <= 100; c++) {
				if ((a * a) + (b * b) == (c * c))
					cout << a << " " << b << " " << c << endl;
			}
		}
	}
}