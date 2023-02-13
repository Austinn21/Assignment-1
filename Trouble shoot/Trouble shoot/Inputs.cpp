#include <iostream>

using namespace std;

// The function that searches the array for the input index
int search_element(int arr[], int length, int key)
{
	int i;

	for (i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;

	return i;
}

// The function that modifys the index based on the users input
int modify_index(int arr[], int index)
{
	int key;

	cout << "Enter new value to be changed: ";
	cin >> key;

	arr[index] = key;

	return key;
}

// The function that adds the new integer based on the users input
void add_new_integer(int arr[], int* length)
{
	int element;

	cout << endl << "Enter new element: ";
	cin >> element;

	arr[*length] = element;

	*length = *length + 1;

	cout << "Element Inserted";
}

// The function that removes the index based on the users input
void remove_index(int arr[], int* length)
{
	int index;

	cout << endl << "Enter index to be removed: ";
	cin >> index;

	for (int i = index; i < *length - 1; i++)
		arr[i] = arr[i + 1];

	*length = *length - 1;

}