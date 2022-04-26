#include <iostream>
using namespace std;

#define ARRAY_SIZE 5	//initialize Macro for array size

/*
* sumEven is a function with a return type float,
* takes two arguments an array and size of this array
* the function calculates the sum of elements in the even indeces
*/
float sumEven(float arr[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		if (i % 2 == 0) sum += arr[i];
	return sum;
}
/*
* sumOdd is a function with a return type float,
* takes two arguments an array and size of this array
* the function calculates the sum of elements in the odd indeces
*/
float sumOdd(float arr[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		if (i % 2 != 0) sum += arr[i];
	return sum;
}
/*
* printArray is a function has no return type,
* takes two arguments an array and size of this array
* the function print the elements in tha array
*/
void printArray(float arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
	cout << "\n";
}

int main()
{
	float list[ARRAY_SIZE];	//Declaring an array with a size = SIZE
	cout << "Enter five elements: ";
	for (int i = 0; i < ARRAY_SIZE; i++)	
		cin >> list[i];		//enter the elements in the array
	printArray(list, ARRAY_SIZE);	//calling printArray
	cout << sumEven(list, ARRAY_SIZE) << "\n"; //calling sumEven
	cout << sumOdd(list, ARRAY_SIZE) << "\n";  //calling sumOdd
	return 0;
}