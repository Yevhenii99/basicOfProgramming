#include <iostream>

//Варіант 6. Дан двовимірний масив чисел.Підрахувати добуток однієї й другої діагоналі масиву чисел.

//Option 6. Given a two - dimensional array of numbers.Calculate the product of one and the second diagonal of the array of numbers.

int getCalcDiagonalMult(int m[][3], int row, int col);
void getSumOfMatrixElems();
void getMultOfPositiveElems(int* array, const int SIZE);
int getFillThirdMatrixUsingTwo();

int main() {
	int arr[][3] = {
		{4, 2, 3},
		{4, 2, 6},
		{7, 8, 9}
	};
	
	const int SIZE = 11;
	//Array for 2 task
	int array2[] = { 3, 2, -12, 2, 4, -1, 1, 2, 3, -4, 1 };

	getCalcDiagonalMult(arr, 3, 3);
	/*getSumOfMatrixElems();
	getMultOfPositiveElems(array2, SIZE);
	getFillThirdMatrixUsingTwo();*/

	return 0;
}



int getCalcDiagonalMult(int m[][3], int row, int col) {
	int mult1 = 1;
	int mult2 = 1;
	int result;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
		{
			mult1 *= m[i][j];
			i++;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = col - 1; j >= 0; j--)
		{
			mult2 *= m[i][j];
			i++;
		}
	}
	result = mult1 - mult2;
	std::cout << "Multiply of elements from main diagonal is: " << mult1 << "\nMultiply of elements from sub-main diagonal is: " << mult2 << std::endl;
	return 0;
}
//Варіант 15. Задана двовимірна матриця дійсних чисел А[1..N, 1..N].Знайдіть суму заштрихованих елементів 
//Option 15. Given a two - dimensional matrix of real numbers A[1..N, 1..N].Find the sum of the shaded elements
void getSumOfMatrixElems() {
	int matrix[][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 15, 16, 17, 18},
		{22, 19, 20, 21, 22}
	};
	const int ROW = 5, COL = 5;
	int k;
	int sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		if (i < ((ROW / 2) + 1)) {
			k = i;
			for (int j = 0; j <= i; j++) {
				sum += matrix[i][j];
			}
		}
		else {
			for (int j = 0; j <= k; j++) {
				sum += matrix[i][j];
				k--;
			}
		}
	}
		std::cout << "result is: " << sum << std::endl;
}

//Завдання 2. У масиві з 11 елементів знайти добуток додатних елементів; визначити max за модулем елемент.
//Task 2. Find the product of positive elements in an array of 11 elements; determine the max modulo the element.


void getMultOfPositiveElems(int *array, const int SIZE) {
	unsigned int calcMult = 1;
	short* pSeedValue = new short;
	std::cout << "Value: " << *array << std::endl;
	*pSeedValue = *array;
	for (int i = 0; i < SIZE; i++) {
		std::cout << "Value in this address: " << *(array + i) << std::endl;
		if (*(array + i) > 0) {
			calcMult *= *(array + i);
		}
		if (abs(*(array + i)) > *pSeedValue) {
			*pSeedValue = abs(*(array + i));
		}
	}
	std::cout << "Result: " << calcMult << std::endl;
	std::cout << "The max absolute number: " << *pSeedValue << std::endl;
}


//ЗАВДАННЯ3 Оголосити три двовимірних масиви(матриці) 
//та підрахувати суму двох матриць записавши результат у третю матрицю, 
//тобто результатам повинна бути матриця, а не число.Вивести отриманий результат на друк.

//TASK 3 Declare three two - dimensional arrays(matrices)
//and calculate the sum of two matrices by writing the result in the third matrix,
//that is, the results should be a matrix, not a number. Print the obtained result.


int getFillThirdMatrixUsingTwo() {
	const int ROW = 3, COL = 3;
	int** pMatrix = new int* [ROW];
	for (int i = 0; i < ROW; i++)
	{
		pMatrix[i] = new int[COL];
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) {
			pMatrix[i][j] = rand() % 15;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++) {
			std::cout << pMatrix[i][k] << "  ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	int** pMatrix2 = new int* [ROW];
	for (int i = 0; i < ROW; i++)
	{
		pMatrix2[i] = new int[COL];
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) {
			pMatrix2[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++) {
			std::cout << pMatrix2[i][k] << "  ";
		}
		std::cout << "\n";
	}

	int** pMatrix3 = new int* [ROW];
	for (int i = 0; i < ROW; i++)
	{
		pMatrix3[i] = new int[COL];
	};
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
		{
			pMatrix3[i][j] = pMatrix[i][j] + pMatrix2[i][j];
		}
	}
	// Displaying the resultant sum matrix.
	std::cout << std::endl << "Sum of two matrix is: " << std::endl;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
		{
			std::cout << pMatrix3[i][j] << "  ";
			if (j == COL - 1)
				std::cout << std::endl;
		}

	return 0;
}


