#include <iostream>
using namespace std;

int average_salary(const int *arr,int employees) 
{
	int sum = 0;
	for (int y = 0; y < employees; y++) {
		sum = sum + arr[y];
	}
	sum = sum / employees;
	return sum;
}

int main()
{
	int employees;
	cout << "Give the number of employees: ";
	cin >> employees;

	int salary = employees;
	int *arr = new int[salary];
	
	for (int x = 0; x < employees; x++) {
		cout << "Give salary for employee " << x + 1 << ": ";
		cin >> arr[x];
	}
	int done = average_salary(arr, employees);
	cout << "The average salary is: " << done;

	delete[] arr;
	system("pause");
	return 0;
}