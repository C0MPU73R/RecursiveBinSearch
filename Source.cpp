#include <iostream>
using namespace std;
int binSearch(int[], int, int, int);

int main()
{

	int TABLE[] = {1,2,3,4,5,6,7,8,9};

	int FIRST = TABLE[0];

	int LAST = TABLE[8];

	int TARGET = TABLE[1];

	int r = binSearch(TABLE, TARGET, FIRST, LAST);

	cout << "Position of target "<< TARGET << " is "<< r;

	system("pause");
	return 0;
}
int binSearch(int table[], int target, int first, int last)
{

	int middle;
	middle = (first + last) / 2; //middle of array

	if (first > last)
	{
		return -1; //unsuccessful search, the table is not sorted

	}
	else if (target == table[middle])
	{
		return middle; // successful search
	}

	else if (target < table[middle]) // search lower half of array
	{
		return binSearch(table, target, first, middle - 1);
	}
	else // search upper half of array
	{
		return binSearch(table, target, middle + 1, last);
	}

}