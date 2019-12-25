#include <iomanip>
#include <iostream>
//#include <windows.h>
using namespace std;

int main()
{
	int arr[8] = {1,2,3,4,5,6,7,8};

	arr[3] = 2;
	arr[6] = 9;
	arr[2] = 4;

	cout << endl << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7] << endl << endl;
	
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << ", " << arr[5] << ", " << arr[6] << ", " << arr[7] << endl;
	
	return 0;
}