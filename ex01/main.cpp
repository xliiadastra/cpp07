#include "iter.hpp"

int main()
{
	int arr[] = {0, 1, 2, 3, 4};
	const int carr[] = {5, 6, 7, 8, 9};

	iter(arr, 5, printFnc);
	std::cout << "-----------------------\n";
	iter(carr, 5, printFnc);

	return 0;
}