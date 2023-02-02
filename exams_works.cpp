#include <iostream>
#include <math.h>


void getIncreaseNums_1(int a, int b, int c);
void getIncreaseNums_2(int *a, int *b, int *c);
void getIncreaseNums_3(int &a, int &b, int &c);
int  getVolumeOfCubeCoef_X(int &w, int &l, int &h, int &x);
int getMaxNumber(int a, int b, int c);
int getMaxNumber(int a, int b);

void getHeapMemory();

int main(void) {
	int a = 10, b = 5, c = 33;

	int width, length, height, x;
	std::cout << "Enter the width please: ";
	std::cin >> width;
	std::cout << "Enter the length please: ";
	std::cin >> length;
	std::cout << "Enter the height please: ";
	std::cin >> height;
	std::cout << "Enter the coefficient X please: ";
	std::cin >> x;
	getIncreaseNums_1(a, b, c);
	getIncreaseNums_2(&a, &b, &c);
	getIncreaseNums_3(a, b, c);

	getHeapMemory();
	//std::cout << "Result of func execution: " << getVolumeOfCubeCoef_X(width, length, height, x) << std::endl;//Pass the values into func
	//std::cout << "Result of func execution: " << getVolumeOfCubeCoef_X(&width, &length, &height, &x) << std::endl;//Pass the address of vars into func
	std::cout << "Result of func execution: " << getVolumeOfCubeCoef_X(width, length, height, x) << std::endl;//Pass by reference

	//------Exerc-2
	std::cout << "result " << getMaxNumber(a, b, c);
	std::cout << "result " << getMaxNumber(a, b);

}


//----Exercise-1
void getIncreaseNums_1(int a, int b, int c) {
	a += c;
	b += c;

	std::cout << "First num from func 1: " << a << "\n Second num from func 1: " << b << std::endl;
}

void getIncreaseNums_2(int *a, int *b, int *c) {

	*a += *c;
	*b += *c;

	std::cout << "First num from func 2: " << *a << "\n Second num from func 2: " << *b << std::endl;
}

void getIncreaseNums_3(int &a, int &b, int &c) {
	a += c;
	b += c;
	std::cout << "First num from func 3: " << a << "\n Second num from func 3: " << b << std::endl;
}

//------Exercise-2

int getVolumeOfCubeCoef_X(int &w, int &l, int &h, int &x) {
	int volume = ((w * l) * h) * x;
	return volume;
}
// -------------
//Find max value in 2 funcs (first has 3 parameters and second has 2 paramtrs)

int getMaxNumber(int a, int b, int c) {
	
	return (std::max(a, std::max(b, c)));
}
int getMaxNumber(int a, int b) {

	return (std::max(a, b));
}

void getHeapMemory() {
	int* pAge = new int;
	std::cout << "Value of var pAge before init: " << *pAge << std::endl;
	*pAge = 22;
	std::cout << "Value of var pAge after init: " << *pAge << std::endl;
}