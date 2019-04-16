#include <iostream>
#include <ctime>
using namespace std;

float randFloat() {
	return ((10 - 90) * ((float)rand() / RAND_MAX)) + 10;
}

void fillArray(float *arr, int SIZE) {
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)

			arr[i * SIZE + j] = randFloat();
}
void printArray(float *arr, int SIZE) {
	cout << "\nArray: \n";
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout << arr[i * SIZE + j] << " ";
		cout << "\n";
	}
}


void Sort(float arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

float* getAverage(float* arr, int const SIZE) {
	float *oArr = new float[SIZE*SIZE];
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			oArr[i + j] = arr[i * SIZE + j];


	Sort(oArr, SIZE * SIZE);
	int indx = (SIZE * SIZE) / 2;

	if (oArr[indx] > 0) oArr[indx] = fabs(oArr[indx]);
	else oArr[indx] = -oArr[indx];

	return &oArr[indx];
}

int main() {
	srand(unsigned(time(0)));
	const int SIZE = 5;
	float* arr = new float[SIZE * SIZE];

	fillArray(arr, SIZE);
	printArray(arr, SIZE);

	cout << "\n\nAVG: " << *getAverage(arr, SIZE) << endl;;

	system("pause");
	return 0;
}