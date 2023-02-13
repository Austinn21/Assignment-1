#include <iostream>
#include <fstream>

using namespace std;

// Grabs the numbers from the numbers.txt file,
// and if there is no "numbers.txt" file let the user know that.
bool fetch_array(int arr[], int* length)
{
	ifstream fp("Numbers.txt");

	if (!fp.is_open())
	{
		cout << "File Not Opened Properly";
		return false;
	}

	*length = 0;

	while (fp >> arr[*length])
	{
		*length = *length + 1;
	}

	fp.close();

	return true;
}

// prints the array from the numbers.txt file
void print_array(int arr[], int length)
{
	cout << endl << "The elements are: ";

	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";

	cout << endl;
}