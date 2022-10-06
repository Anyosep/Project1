#include <iostream>
#include<cmath>
#include<ctime>
#include <cstdlib>
using namespace std;
int main() {
	//p.115, 1번 문제
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1; i <= 12; i++)
		cout << i << "월은 " << days[i - 1] << "일까지 있습니다." << endl;
	//p.117, 10번 문제
	for (int a = 1; a <= 100; a++) {
		for (int b = 1; b <= 100; b++) {
			for (int c = 1; c <= 100; c++) {
				if ((a * a) + (b * b) == (c * c))
					cout << a << " " << b << " " << c << endl;
			}
		}
	}
	//p.119, 16번 문제
	int cash = 50;
	const int goal = 250;
	int bets, win;
	bool result;
	int wins = 0;
	int total = 0;
	srand((unsigned int)time(NULL));
	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal << endl;
	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0;
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				win++;
			}
			else
				cash--;
			if (cash <= 0)
			{
				result = false;
				break;
			}
			if (cash >= goal)
			{
				result = true;
				break;
			}
		}
		if (result == true)
			wins++;
		total += bets;
	}
	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;
	return 0;
}

#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;
inline double calc_volume(double rad) {
	return (4.0 / 3.0 * 3.14 * pow(rad, 3));
}
bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}
bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}
bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}
int main() {
	//p.160 2번 문제
	double rad;
	double vol;
	cout << "반지름을 입력하시오: ";
	cin >> rad;
	vol = calc_volume(rad);
	cout << "구의 부피는 " << vol << endl;
	//p.162 9번 문제
	srand((unsigned int)time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int result = dice1 + dice2;
	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << result << endl;
	if (result == 7 || result == 11)
		cout << "사용자가 이겼습니다." << endl;
	if (result == 2 || result == 3 || result == 12)
		cout << "사용자가 졌습니다." << endl;
	//p.164 13번 문제
	string pw;
	cout << "암호를 입력하시오: ";
	cin >> pw;
	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;
}



#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;
int main() {
	//p.353 1번 문제
	int num;
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;
	int* ptr = new int[num];
	for (int a = 0; a < num; a++) {
		cout << "정수를 입력하시오 : ";
		cin >> ptr[a];
	}
	cout << "입력된 정수는: ";
	for (int a = 0; a < num; a++) {
		cout << ptr[a] << ", ";
	}
	delete[] ptr;
	//p.353 2번 문제
	int num;
	cout << "얼마나 많은 이름을 입력 하시겟습니까? ";
	cin >> num;
	string* name = new string[num];
	for (int a = 0; a < num; a++) {
		cout << "이름 입력 # " << a + 1 << ": ";
		cin >> name[a];
	}
	cout << endl;
	cout << "다음은 이름 목록입니다." << endl;
	for (int a = 0; a < num; a++) {
		cout << "이름 #" << a + 1 << ": " << name[a] << endl;
	}
	delete[] name;
}

