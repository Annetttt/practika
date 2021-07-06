#include <iostream>
#include <string>
#include <vector>

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

	bigNum(int number) {
		this->numbers.push_back(number);
	}

	string toString() {
		string temp;

		for (int index = this->numbers.size() - 1; index >= 0 ; index--) {
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
int a = 1, b = 1, c;
    cout << "Test 1:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 9, b = 7000;
    cout << "Test 2:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 1, b = 7000;
    cout << "Test 3:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 9, b = 1;
    cout << "Test 4:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 2, b = 1034;
    cout << "Test 5:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 4, b = 5555;
    cout << "Test 6:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 5, b = 202;
    cout << "Test 7:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 6, b = 6999;
    cout << "Test 8:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 7, b = 5;
    cout << "Test 9:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 8, b = 86;
    cout << "Test 10:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    return 0;
}


