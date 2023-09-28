#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(0, 1);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

bool isScalarMatrix(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if ((i == x)&& arr[i][x] != arr[Rows / 2][Colos / 2])
				return false;
			else if ((i != x) && arr[i][x] != 0)
				return false;
		}
		cout << endl;
	}
	return true;
}

void printResult(int arr1[3][3], int Rows, int Colos)
{
	if (isScalarMatrix(arr1, Rows, Colos))
		cout << "   Yes: Matrix is Scalar.\n";
	else
		cout << "   No: Matrix is not Scalar.\n";
}

int main()
{
	srand((unsigned)time(NULL));
	//int arr[3][3];
	int arr[3][3] = { {2,0,0},{0, 2, 0},{0, 0, 2} };

	//fill3X3MatrixWithRandomNumbers(arr, 3, 3);
	cout << "  The Matrix: \n";
	printMatrix3X3(arr, 3, 3);

	printResult(arr, 3, 3);





	return 0;
}



