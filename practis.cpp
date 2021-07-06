#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class bigNum {
public:
	vector<int> numbers;
	bigNum operator * (int number) {
		for (int index = 0; index < this->numbers.size(); index++) {
			this->numbers[index] = this->numbers[index] * number;
		}

		for (int index = 0; index < this->numbers.size(); index++) {
			if (this->numbers[index] > 9) {
				if (index == this->numbers.size() - 1) {
					this->numbers.push_back(0);
				}

				this->numbers[index + 1] += this->numbers[index] / 10;
				this->numbers[index] = this->numbers[index] % 10;
			}
		}
		return *this;
	}

	bigNum() {

	}

	bigNum(int number) {
		this->numbers.push_back(number);
	}

	string toString() {
		string temp;

		for (int index = this->numbers.size() - 1; index >= 0; index--) {
			temp += 48 + this->numbers[index];
		}

		return temp;
	}
};

bigNum numberToPower(int, int);

bigNum numberToPower(int number, int power) {
	bigNum result(number);
	for (int index = 0; index < power - 1; index++) {
		result = result * number;
	}
	return result;
}


int main()
{
	bigNum result;
	result = numberToPower(1, 1);
	cout << "Test 1:" << setw(10) << 1 << setw(10) << 1 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(7, 900);
	cout << "Test 2:" << setw(10) << 7 << setw(10) << 9000 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(1, 7000);
	cout << "Test 3:" << setw(10) << 1 << setw(10) << 7000 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(9, 1);
	cout << "Test 4:" << setw(10) << 9 << setw(10) << 1 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(2, 1034);
	cout << "Test 5:" << setw(10) << 2 << setw(10) << 1034 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(4, 5555);
	cout << "Test 6:" << setw(10) << 4 << setw(10) << 5555 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(5, 202);
	cout << "Test 7:" << setw(10) << 5 << setw(10) << 202 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(6, 6999);
	cout << "Test 8:" << setw(10) << 6 << setw(10) << 6999 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(7, 5);
	cout << "Test 9:" << setw(10) << 7 << setw(10) << 5 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	result = numberToPower(8, 86);
	cout << "Test 10:" << setw(10) << 8 << setw(10) << 86 << "\nResult:" << result.toString() << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	return 0;
}
