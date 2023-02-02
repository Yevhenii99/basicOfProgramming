#include <iostream>

//TASK 1
//Make a program that should demonstrate :
//Memory allocation in the C++ language :
//	Allocate memory for one object.
//	Print the value stored at the address specified in the pointer.
//	Write the value at the address specified in the pointer.
//	Print the recorded value.
//	Free the allocated memory.
//	Allocate memory for a group of objects.
//	Print the value stored in the second element of the object using square bracketsand a pointer.
//	Write the value in each element of the object.
//	Print all values.
//	Free the allocated memory.
//	Give examples of code that causes a memory leak.
//	Give examples of code that causes the program to "crash".
//	Give examples of code that leads to an unexpected situation.


void getHeapMemForFewElem();
void getHeapMemory();
void getMemoryLeak();

int main() {
	getHeapMemory();
	getHeapMemForFewElem();
	getMemoryLeak();
}

void getHeapMemory() {
	int* pAge = new int;
	std::cout << "Value in var pAge which placed in HEAP before initialization: " << *pAge << std::endl;//Just rubbish here
	*pAge = 23;
	std::cout << "Value in var pAge which placed in HEAP: " << *pAge << std::endl;//result: 23
	delete pAge;//Memory in HEAP is deleted and now it`s clear
}

void getHeapMemForFewElem() {
	int* pYearsOfBirthday = new int[5];
	pYearsOfBirthday[0] = 1999;
	pYearsOfBirthday[1] = 2003;
	pYearsOfBirthday[2] = 1978;
	pYearsOfBirthday[3] = 1956;
	std::cout << "Second value in HEAP array of memory: " << pYearsOfBirthday[1] << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "\nValue: " << pYearsOfBirthday[i] << std::endl;
	}
	delete [] pYearsOfBirthday;
}

void getMemoryLeak() {
	int* pBudget = new int;
	*pBudget = 24000;
	int loses = 1000;//Before this line i had to write delete pBudget;
	//pBudget = &loses;//It`s memory leak (i cant reach address of value 24000); 
	std::cout << "Value in pBudget: " << *pBudget << std::endl;
	//pBudget++;
	//delete pBudget;//Uknown result cuz address was changed 
	int* pAmountOfPeople = new int[3];
	for (int i = 0; i < 3; i++) {
		pAmountOfPeople[i] = i + 3;
		std::cout << pAmountOfPeople[i] << "\n" << std::endl;
	}
}

