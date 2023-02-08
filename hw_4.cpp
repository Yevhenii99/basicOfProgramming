#include <iostream>

//Варіант 6. Дан двовимірний масив чисел.Підрахувати добуток однієї й другої діагоналі масиву чисел.

//Option 6. Given a two - dimensional array of numbers.Calculate the product of one and the second diagonal of the array of numbers.

int getCalcDiagonalMult(int m[][3], int row, int col);
void getSumOfMatrixElems();
void getMultOfPositiveElems(int* array, const int SIZE);
void getFillTrirdMatrix();

int main() {
	int arr[][3] = {
		{4, 2, 3},
		{4, 2, 6},
		{7, 8, 9}
	};
	
	const int SIZE = 11;
	int array2[] = { 3, 2, -12, 2, 4, -1, 1, 2, 3, -4, 1 };

	//getCalcDiagonalMult(arr, 3, 3);
	//getSumOfMatrixElems();
	//getMultOfPositiveElems(array2, SIZE);
	getFillTrirdMatrix();

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
	int sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) {
			sum += matrix[i][j];
			sum += matrix[i + 1][j];
			sum += matrix[i + 1][j + 1];
			sum += matrix[i + 2][j];
			sum += matrix[i + 2][j + 1];
			sum += matrix[i + 2][j + 2];
			sum += matrix[i + 3][j];
			sum += matrix[i + 3][j + 1];
			sum += matrix[i + 4][j];
			break;
		}
		break;
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

void getFillTrirdMatrix() {
	int** pMatrix = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		pMatrix[i] = new int[3];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			pMatrix[i][j] = rand() % 10;
		}
	}
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++) {
			std::cout << pMatrix[i][k] << "    ";

			sum += pMatrix[i][k];
		}
		std::cout << "\n";
	}
	std::cout << "Sum res: " << sum << std::endl;

	int** pMatrix2 = new int* [3];


}






