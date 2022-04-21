#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int number[10];
	int input;
	int temp = number[0];
	int num = 0;
	int i = 0;
	cout << "Enter 10 numbers." << endl;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		number[i] = input;
	}
	while (i != 10) {
		while (number[i] = temp) {
			//for (int i = 0; i < 10; i++);
			//for (int num = 0; num < 10; num++);
			i++;
			num++;

		}
		cout << temp << num << endl;
		num = 0;
		temp = number[1];
	}
}
