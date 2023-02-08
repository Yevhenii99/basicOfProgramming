#include <iostream>

//������ 6. ��� ���������� ����� �����.ϳ��������� ������� ���� � ����� ������� ������ �����.

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
//������ 15. ������ ��������� ������� ������ ����� �[1..N, 1..N].������� ���� ������������� �������� 
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

//�������� 2. � ����� � 11 �������� ������ ������� �������� ��������; ��������� max �� ������� �������.


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


//��������3 ��������� ��� ���������� ������(�������) 
//�� ���������� ���� ���� ������� ��������� ��������� � ����� �������, 
//����� ����������� ������� ���� �������, � �� �����.������� ��������� ��������� �� ����.

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



	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			pMatrix[i][j] = 2;
		}
	}
	std::cout << pMatrix[0][2] << std::endl;*/
}





//void func(int* m, int r1, int r2);
//int main() {
//	int arr[][3] = {
//		{1, 2, 3},
//		{4, 5, 6}
//	};
//	func(&arr[0][0], 2, 3);
//	return 0;
//}

//void func(int *m, int r1, int r2) {
//	std::cout << "f\n";
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < r2; j++) {
//			std::cout << *(m + i * r2 + j);
//		}
//	}
//}
