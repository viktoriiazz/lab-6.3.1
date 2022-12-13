
#include<iostream>
#include <iomanip>  
#include <time.h>  

using namespace std;

int Print(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if ((arr[i] % 2) != 0) {

			cout << "[" << arr[i] << "]";
		}
	}
	return 0;
}
int PrintArraySum(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			sum += arr[i];

		}
	}
	return sum;
}


int main() {

	const int size = 19;
	int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8 , 9.10, 11, 12, 13, 14, 15, 16, 17, 18 };
	Print(arr, size);
	cout << endl;
	cout << "Sum = " << PrintArraySum(arr, size) << endl;
}