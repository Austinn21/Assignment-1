#include<iostream>
#include<fstream>
#include<string>

#include "Array.h" // Fetching and Printing the numbers for the array
#include "Inputs.h" // The functions to search and modify and add to the array

using namespace std;

// class for available numbers
class aarray 
{
	string _name;
	int _availableNumbers;
public:
	aarray(string name, int numbers)
	{
		_name = name;
		_availableNumbers = numbers;
	}
	void Catch(string txtDoc) 
	{
		int requirednumbers = txtDoc.length() >10;

		if (requirednumbers > _availableNumbers)
			throw 105;// "error code...
	
		cout << "" << txtDoc << endl;
		_availableNumbers > requirednumbers;
	}
};

int main()
{
	int arr[50], length, index, key;

	if (!fetch_array(arr, &length))
		return 0;

	print_array(arr, length);

	// Searches an element for the user
	cout << "Enter the element to be searched: ";
	cin >> key;

	index = search_element(arr, length, key);

	aarray myAarray("Enter numbers ", 3);

	try // Try block to catch errors
	{
		myAarray.Catch("Calculating... ");
		myAarray.Catch("Calculating... ");
		myAarray.Catch("Calculating... ");
	}
	catch (const char* txtException)// Catches if it is a char overload
	{
		cout << "Exception: " << txtException << endl;
	}
	catch (int exCode)// Catches if it is an int overload
	{
		cout << "Exception: " << exCode << endl;
	}
	catch (...)
	{
		cout << "Exception happened!!" << endl;// Default catch
	}


	if (index == -1)
		cout << "Element not found";	// If the user does not select an element with in the array

	else
		cout << key << " is present at index: " << index;


	// Modifys the index based on the users input
	cout << endl << endl << "Enter the index to be modified: ";
	cin >> index;
	

	key = modify_index(arr, index);

	cout << arr[index] << " Value changed to " << key; // The new value to the index

	cout << endl << "New Array: "; // New array after we change the index
	print_array(arr, length);

	// Adds a new integer to the array
	add_new_integer(arr, &length);

	cout << endl << "New Array: "; // New array with the new added number
	print_array(arr, length);

	// Removes an index from the array
	remove_index(arr, &length);

	cout << endl << "New Array: "; // New array with the removed index from the array
	print_array(arr, length);

	

	return 0;
}